#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QDateTime>
#include "apimodel.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    ApiModel *api;

private:
    Ui::MainWindow *ui;
    QTimer *timer;

protected:
    void closeEvent(QCloseEvent *event);

public slots:
    void slot_datetime();
    void slot_resolved_address(QString);
    void slot_description(QString);
    void slot_temperature(double);
    void slot_feelslike(double);
    void slot_conditions(QString);
    void slot_humidity(double);
    void slot_windspeed(double);
    void slot_winddir(double);
    void slot_pressure(double);
    void slot_sunrise(QString);
    void slot_sunset(QString);
    void slot_forecast_date(QString);
    void slot_forecast_temp_min(double);
    void slot_forecast_temp_max(double);
    void slot_forecast_conditions(QString);
    void slot_status(QString);
};
#endif // MAINWINDOW_H
