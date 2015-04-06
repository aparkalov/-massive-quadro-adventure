#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cell/mapmodel.h"

static const int timeout = 2000;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    int x = this->mapmodel.width;
    int y = this->mapmodel.height;

    model.setRowCount(x);
    model.setColumnCount(y);

    emit refreshModel();

    //todo: add table din

    connect(&timer, SIGNAL(timeout()), this, SLOT(refreshModel()));
    timer.start(timeout);
}

void MainWindow::refreshModel()
{
    this->mapmodel.run();

    int x = this->mapmodel.width;
    int y = this->mapmodel.height;

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
