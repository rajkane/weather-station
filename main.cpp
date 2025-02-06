#include "./headers/mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationName("Weather Station");
    a.setApplicationVersion("1.0");
    a.setWindowIcon(QIcon(":/qrc/Images/sunny.png"));
    MainWindow w;
    w.show();
    return a.exec();
}
