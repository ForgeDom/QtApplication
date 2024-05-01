#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "signinwindow.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_label_linkActivated(const QString &link);

    void on_moveToSignButton_clicked();

private:
    Ui::MainWindow *ui;
    SignInWindow *signinwindow;
};
#endif // MAINWINDOW_H
