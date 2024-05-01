/********************************************************************************
** Form generated from reading UI file 'bookmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKMAINWINDOW_H
#define UI_BOOKMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_BookMainWindow
{
public:

    void setupUi(QDialog *BookMainWindow)
    {
        if (BookMainWindow->objectName().isEmpty())
            BookMainWindow->setObjectName("BookMainWindow");
        BookMainWindow->resize(800, 600);

        retranslateUi(BookMainWindow);

        QMetaObject::connectSlotsByName(BookMainWindow);
    } // setupUi

    void retranslateUi(QDialog *BookMainWindow)
    {
        BookMainWindow->setWindowTitle(QCoreApplication::translate("BookMainWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookMainWindow: public Ui_BookMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKMAINWINDOW_H
