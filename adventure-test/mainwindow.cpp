#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cell/mapmodel.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->mapmodel.run();

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
