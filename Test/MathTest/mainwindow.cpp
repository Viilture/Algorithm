#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    static QSharedPointer<QPixmap> p1, p2;
    qDebug() << "p1 - " << p1.isNull() << "p2 - " <<p2.isNull();
    p1 = QSharedPointer<QPixmap>::create(1000,1000);
    qDebug() << "p1 - " << p1.isNull() << "p2 - " <<p2.isNull();
    p2 = std::move(p1);
    qDebug() << "p1 - " << p1.isNull() << "p2 - " <<p2.isNull();
}

MainWindow::~MainWindow()
{
    delete ui;
}
