#include "signinwindow.h"
#include "ui_signinwindow.h"

SignInWindow::SignInWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SignInWindow)
{
    ui->setupUi(this);
}

SignInWindow::~SignInWindow()
{
    delete ui;
}

void SignInWindow::on_backToFirstButton_clicked()
{
    this->hide();
}
