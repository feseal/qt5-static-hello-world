#include "mainwindow.h"
#include <QApplication>

#include <QtPlugin>
Q_IMPORT_PLUGIN(QCocoaIntegrationPlugin)

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
