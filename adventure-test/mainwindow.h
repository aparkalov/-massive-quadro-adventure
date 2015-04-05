#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include "cell/mapmodel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(MapModel model, QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    MapModel mapmodel;
    QStandardItemModel model;
};

#endif // MAINWINDOW_H
