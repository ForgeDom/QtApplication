#include "bookmainwindow.h"
#include "ui_bookmainwindow.h"

BookMainWindow::BookMainWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::BookMainWindow)
{
    ui->setupUi(this);
}

BookMainWindow::~BookMainWindow()
{
    delete ui;
}
