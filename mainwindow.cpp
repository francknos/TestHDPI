#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->factor->setText(QString("%1").arg(qApp->screens().at(0)->logicalDotsPerInch()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent *e)
{
    //qDebug() << "resize EVENT " << QTime::currentTime();
    ui->width->setText(QString("%1 px").arg(e->size().width()));
    ui->height->setText(QString("%1 px").arg(e->size().height()));
}

void MainWindow::moveEvent(QMoveEvent *)
{
//    qDebug() << e->pos();
//    qDebug() << QCursor::pos();
//    ui->ldpi->setText(QString("%1 ldpi").arg(qApp->screenAt(QCursor::pos())->logicalDotsPerInch()));
//    ui->pdpi->setText(QString("%1 ddpi").arg(qApp->screenAt(QCursor::pos())->physicalDotsPerInch()));

    ui->factor->setText(QString("%1").arg(qApp->screenAt(QCursor::pos())->devicePixelRatio()));
}

