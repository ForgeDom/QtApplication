#ifndef BOOKMAINWINDOW_H
#define BOOKMAINWINDOW_H

#include <QDialog>

namespace Ui {
class BookMainWindow;
}

class BookMainWindow : public QDialog
{
    Q_OBJECT

public:
    explicit BookMainWindow(QWidget *parent = nullptr);
    ~BookMainWindow();

private:
    Ui::BookMainWindow *ui;
};

#endif // BOOKMAINWINDOW_H
