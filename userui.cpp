#include "userui.h"
#include "ui_userui.h"
#include <QHBoxLayout>

UserUi::UserUi(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UserUi)
{
    ui->setupUi(this);
    searchLineEdit = new QLineEdit(this);
    searchLineEdit->setPlaceholderText("Пошук...");
    searchLineEdit->setClearButtonEnabled(true);

    QHBoxLayout *layout = new QHBoxLayout();
    layout->addWidget(searchLineEdit);

    setLayout(layout);
}

UserUi::~UserUi()
{
    delete ui;
}
