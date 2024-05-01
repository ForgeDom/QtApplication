#ifndef SIGNINWINDOW_H
#define SIGNINWINDOW_H

#include <QWidget>

namespace Ui {
class SignInWindow;
}

class SignInWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SignInWindow(QWidget *parent = nullptr);
    ~SignInWindow();

private slots:
    void on_backToFirstButton_clicked();

private:
    Ui::SignInWindow *ui;
};

#endif // SIGNINWINDOW_H
