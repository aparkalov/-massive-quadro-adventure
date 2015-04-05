#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cell/mapmodel.h"


MainWindow::MainWindow(MapModel mapmodel, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    mapmodel(mapmodel)
{
    ui->setupUi(this);
    int x = this->mapmodel.width;
    int y = this->mapmodel.height;


    model.setRowCount(x);
    model.setColumnCount(y);

    //todo: add table din
    for (int t = 0; t < x; ++t)
    {
        for (int tt = 0; tt < y; ++tt)
        {
            model.setItem(t,tt, new QStandardItem(this->mapmodel.getStringValue(t,tt)));
        }
    }
    ui->tableView->setModel(&model);
}

MainWindow::~MainWindow()
{
    delete ui;
}
