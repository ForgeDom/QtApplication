#include "mainwindow.h"
#include <QMessageBox>
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    signinwindow = new SignInWindow(this);
    signinwindow->hide();
    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::on_moveToSignButton_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_moveToSignButton_clicked()
{
    SignInWindow *signInWindow = new SignInWindow();
    signInWindow->show();
}
