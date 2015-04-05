#include "mainwindow.h"
#include <QApplication>
#include <cell/mapmodel.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

        MapModel model;
        model.run();

    MainWindow w(model);
    w.show();



    return a.exec();
}
