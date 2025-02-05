#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "apimodel.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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

void MainWindow::slot_resolved_address(QString resolved_address){
    ui->lbl_resolved_address->setText(resolved_address);
}

void MainWindow::slot_description(QString description){
    ui->lbl_description->setText(description);
}

void MainWindow::slot_temperature(double temperature){
    ui->lbl_temperature->setText(QString::number(temperature) + " °C");
}

void MainWindow::slot_feelslike(double feelslike){
    ui->lbl_feelslike->setText("Feelslike: " + QString::number(feelslike) + " °C");
}

void MainWindow::slot_conditions(QString conditions){
    ui->lbl_condition->setText(conditions);
}

void MainWindow::slot_humidity(double humidity){
    ui->lbl_humidity->setText("Humidity: " + QString::number(humidity) + " %");
}

void MainWindow::slot_windspeed(double windspeed){
    ui->lbl_wind_speed->setText("Wind Speed: " + QString::number(windspeed) + " m/s");
}

void MainWindow::slot_winddir(double winddir){
    ui->lbl_wind_direction->setText("Wind Direction: " + QString::number(winddir) + " °");
}

void MainWindow::slot_pressure(double pressure){
    ui->lbl_pressure->setText("Pressure: " + QString::number(pressure) + " hPa");
}

void MainWindow::slot_sunrise(QString sunrise){
    ui->lbl_sunrise->setText("Sunrise: " + sunrise);
}

void MainWindow::slot_sunset(QString sunset){
    ui->lbl_sunset->setText("Sunset: " + sunset);
}

void MainWindow::slot_status(QString status){
    ui->lbl_status->setText(status);
}

void MainWindow::closeEvent(QCloseEvent *event){
    api->stop();
    QMainWindow::closeEvent(event);
}


MainWindow::~MainWindow()
{
    delete ui;
}
