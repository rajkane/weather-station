#include "../headers/apimodel.h"

ApiModel::ApiModel(QObject *parent) : QThread(parent)
{
}

void ApiModel::run() {
    while (true) {
        QMutex mutex;
        mutex.lock();
        if (this->stop_command == true) break;
        mutex.unlock();

        emit status("Uploading current data from the API ...");

        // create custom temporary event loop on stack
        QEventLoop loop;

        // "quit()" the event-loop, when the network request "finished()"
        QNetworkAccessManager manager;
        QObject::connect(&manager, SIGNAL(finished(QNetworkReply*)), &loop, SLOT(quit()));

        // the HTTP request
        QNetworkRequest request(QUrl(QString("https://weather.visualcrossing.com/VisualCrossingWebServices/rest/services/timeline/Hlohovec?unitGroup=metric&key=6ZA76ETWS76ZJPPGE99XZKNFG&contentType=json")));
        QNetworkReply *reply = manager.get(request);

        loop.exec();  // block stack until "finished()" has been called

        if (reply->error() == QNetworkReply::NoError) {
            QString data = reply->readAll();

            // resolved address and description
            QJsonDocument json_response = QJsonDocument::fromJson(data.toUtf8());
            QJsonObject json_object = json_response.object();
            emit resolved_address(json_object["resolvedAddress"].toString());
            emit description(json_object["description"].toString());

            // current conditions
            QJsonObject current = json_object["currentConditions"].toObject();
            emit temperature(current["temp"].toDouble());
            emit feelslike(current["feelslike"].toDouble());
            emit conditions(current["conditions"].toString());
            emit humidity(current["humidity"].toDouble());
            emit windspeed(current["windspeed"].toDouble());
            emit winddir(current["winddir"].toDouble());
            emit pressure(current["pressure"].toInteger());
            emit sunrise(current["sunrise"].toString());
            emit sunset(current["sunset"].toString());

            QJsonArray days_array = json_object["days"].toArray();
            foreach(const QJsonValue &value, days_array) {
                QJsonObject days_object = value.toObject();
                QDateTime day = QDateTime::fromString(days_object["datetime"].toString(), "yyyy-MM-dd");
                qDebug() << day.toString("ddd, MMM dd") << "\t" << days_object["tempmin"].toDouble()
                         << "\t" << days_object["tempmax"].toDouble() << "\t" << days_object["conditions"].toString();
            }

            emit status("Data was successfully updated");
            delete reply;
            this->msleep(60000);
        } else {
            emit status(reply->errorString());
            delete reply;
            this->msleep(60000);
        }
    }
}

void ApiModel::stop(){
    this->terminate();
    this->wait();
    this->deleteLater();
}
