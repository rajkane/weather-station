#include "../headers/mainwindow.h"
#include "ui_mainwindow.h"
#include "../headers/apimodel.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->textEdit->setReadOnly(true);
    ui->textEdit->horizontalScrollBar();
    ui->textEdit->clear();
    ui->textEdit->insertPlainText("Date\t\tTempmin\tTempmax\tCondition\r");
    ui->textEdit->insertPlainText("---------------------------------------------------------------------------------------------------------------\r");

    // start datetime
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(slot_datetime()));
    timer->start(1000);

    // start thread for api data
    api = new ApiModel(this);
    connect(api, SIGNAL(resolved_address(QString)), this, SLOT(slot_resolved_address(QString)));
    connect(api, SIGNAL(description(QString)), this, SLOT(slot_description(QString)));
    connect(api, SIGNAL(temperature(double)), this, SLOT(slot_temperature(double)));
    connect(api, SIGNAL(feelslike(double)), this, SLOT(slot_feelslike(double)));
    connect(api, SIGNAL(conditions(QString)), this, SLOT(slot_conditions(QString)));
    connect(api, SIGNAL(humidity(double)), this, SLOT(slot_humidity(double)));
    connect(api, SIGNAL(windspeed(double)), this, SLOT(slot_windspeed(double)));
    connect(api, SIGNAL(winddir(double)), this, SLOT(slot_winddir(double)));
    connect(api, SIGNAL(pressure(double)), this, SLOT(slot_pressure(double)));
    connect(api, SIGNAL(sunrise(QString)), this, SLOT(slot_sunrise(QString)));
    connect(api, SIGNAL(sunset(QString)), this, SLOT(slot_sunset(QString)));
    connect(api, SIGNAL(forecast(QString, double, double, QString)), this, SLOT(slot_forecast(QString, double, double, QString)));
    connect(api, SIGNAL(clear(bool)), this, SLOT(slot_clear(bool)));
    connect(api, SIGNAL(status(QString)), this, SLOT(slot_status(QString)));
    api->stop_command = false;
    api->start();
    ui->statusbar->addPermanentWidget(ui->lbl_status, 5);
    ui->statusbar->addPermanentWidget(ui->lbl_datetime, 1);
}

void MainWindow::slot_datetime(){
    QDateTime datetime = QDateTime::currentDateTime();
    QString dati = datetime.toString("dddd, MMMM dd, yyyy HH:mm:ss");
    ui->lbl_datetime->setText(dati);
}

void MainWindow::slot_resolved_address(QString _resolved_address){
    ui->lbl_resolved_address->setText(_resolved_address);
}

void MainWindow::slot_description(QString _description){
    ui->lbl_description->setText(_description);
}

void MainWindow::slot_temperature(double _temperature){
    ui->lbl_temperature->setText(QString::number(_temperature) + " °C");
}

void MainWindow::slot_feelslike(double _feelslike){
    ui->lbl_feelslike->setText("Feelslike:\n" + QString::number(_feelslike) + " °C");
}

void MainWindow::slot_conditions(QString _conditions){
    ui->lbl_condition->setText(_conditions);
}

void MainWindow::slot_humidity(double _humidity){
    ui->lbl_humidity->setText("Humidity:\n" + QString::number(_humidity) + " %");
}

void MainWindow::slot_windspeed(double _windspeed){
    ui->lbl_wind_speed->setText("Wind Speed:\n" + QString::number(_windspeed) + " km/h");
}

void MainWindow::slot_winddir(double _winddir){
    ui->lbl_wind_direction->setText("Wind Direction:\n" + QString::number(_winddir) + " °");
}

void MainWindow::slot_pressure(double _pressure){
    ui->lbl_pressure->setText("Pressure:\n" + QString::number(_pressure) + " hPa");
}

void MainWindow::slot_sunrise(QString _sunrise){
    ui->lbl_sunrise->setText("Sunrise:\n" + _sunrise);
}

void MainWindow::slot_sunset(QString _sunset){
    ui->lbl_sunset->setText("Sunset:\n" + _sunset);
}

void MainWindow::slot_forecast(QString _date, double _tempmin, double _tempmax, QString _conditions) {

    ui->textEdit->insertPlainText(_date + "\t\t" + QString::number(_tempmin, 'f', 1) + "\t" + QString::number(_tempmax, 'f', 1) + "\t" + _conditions + "\r");
}

void MainWindow::slot_clear(bool _On) {
    if (_On) {
        ui->textEdit->clear();
        ui->textEdit->insertPlainText("Date\t\tTempmin\tTempmax\tCondition\r");
        ui->textEdit->insertPlainText("-----------------------------------------------------------------------------------------------------------\r");
    }
}

void MainWindow::slot_status(QString status){
    ui->lbl_status->setText(status);
}

void MainWindow::closeEvent(QCloseEvent *_event){
    api->stop();
    QMainWindow::closeEvent(_event);
}


MainWindow::~MainWindow()
{
    delete ui;
}
