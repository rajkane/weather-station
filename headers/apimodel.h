#ifndef APIMODEL_H
#define APIMODEL_H
#include <QThread>
#include <QMutex>
#include <QEventLoop>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkAccessManager>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>

class ApiModel : public QThread
{
    Q_OBJECT

public:
    ApiModel(QObject *parent = nullptr);
    void run();
    void stop();
    bool stop_command;

signals:
    void resolved_address(QString);
    void description(QString);
    void temperature(double);
    void feelslike(double);
    void conditions(QString);
    void humidity(double);
    void windspeed(double);
    void winddir(double);
    void pressure(double);
    void sunrise(QString);
    void sunset(QString);
    void forecast(QString, double, double, QString);
    void clear(bool);
    void status(QString);
};

#endif // APIMODEL_H
