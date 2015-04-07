#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QTimer>

#include "cell/mapmodel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();

private:
    Ui::MainWindow *ui;
    MapModel mapmodel;
    QStandardItemModel model;
    QTimer timer;

public slots:
    void refreshModel();
    void runVisitor();
};

#endif // MAINWINDOW_H
