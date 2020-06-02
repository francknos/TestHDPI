#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QResizeEvent>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QEvent>
#include <QDebug>
#include <QCursor>
#include <QScreen>
#include <QTime>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    virtual void resizeEvent(QResizeEvent *e);
    virtual void moveEvent(QMoveEvent *);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
