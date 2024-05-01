#ifndef USERUI_H
#define USERUI_H

#include <QDialog>
#include <QLineEdit>

namespace Ui {
class UserUi;
}

class UserUi : public QDialog
{
    Q_OBJECT

public:
    explicit UserUi(QWidget *parent = nullptr);
    ~UserUi();

private:
    Ui::UserUi *ui;
    QLineEdit *searchLineEdit;
};

#endif // USERUI_H
