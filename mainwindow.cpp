#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    send_request();
}

void MainWindow::send_request(){
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
        ui->lbl_resolved_address->setText(json_object["resolvedAddress"].toString());
        ui->lbl_description->setText(json_object["description"].toString());

        // current conditions
        QJsonObject current = json_object["currentConditions"].toObject();
        ui->lbl_temperature->setText(QString::number(current["temp"].toDouble()) + " °C");
        ui->lbl_feelslike->setText("Feelslike: " + QString::number(current["feelslike"].toDouble()) + " °C");
        ui->lbl_condition->setText(current["conditions"].toString());
        ui->lbl_humidity->setText("Humidity: " + QString::number(current["humidity"].toDouble()) + " %");
        ui->lbl_wind->setText("Wind Speed: " + QString::number(current["windspeed"].toDouble()) + " m/s"
                              + "\t\t|\t\tWind Direction: " + QString::number(current["winddir"].toDouble()) + " °");
        ui->lbl_pressure->setText("Pressure: " + QString::number(current["pressure"].toInteger()) + " hPa");
        ui->lbl_sunrise_sunset->setText("Sunrise: " + current["sunrise"].toString()
                                        + "\t\t|\t\tSunset: " + current["sunset"].toString());

        //foreach (const QJsonValue &value, days_array) {
        //    QJsonObject days_object = value.toObject();
        //    qDebug() << days_object["datetime"].toString();
        //}

        ui->statusbar->showMessage("Response from API: OK");
        delete reply;
    } else {
        ui->statusbar->showMessage("Error" + reply->errorString());
        delete reply;
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
