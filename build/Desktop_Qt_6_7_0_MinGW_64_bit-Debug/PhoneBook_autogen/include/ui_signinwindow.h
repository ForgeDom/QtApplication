/********************************************************************************
** Form generated from reading UI file 'signinwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNINWINDOW_H
#define UI_SIGNINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignInWindow
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *backToFirstButton;

    void setupUi(QWidget *SignInWindow)
    {
        if (SignInWindow->objectName().isEmpty())
            SignInWindow->setObjectName("SignInWindow");
        SignInWindow->resize(800, 600);
        lineEdit = new QLineEdit(SignInWindow);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(280, 180, 251, 41));
        lineEdit->setAlignment(Qt::AlignCenter);
        label = new QLabel(SignInWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(380, 110, 61, 41));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);
        label->setMouseTracking(false);
        lineEdit_2 = new QLineEdit(SignInWindow);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(280, 240, 251, 41));
        lineEdit_2->setEchoMode(QLineEdit::Normal);
        lineEdit_2->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(SignInWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(340, 300, 141, 31));
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8(""));
        backToFirstButton = new QPushButton(SignInWindow);
        backToFirstButton->setObjectName("backToFirstButton");
        backToFirstButton->setGeometry(QRect(370, 340, 83, 29));
        backToFirstButton->setStyleSheet(QString::fromUtf8("border :none;\n"
"text-decoration: underline;"));

        retranslateUi(SignInWindow);

        QMetaObject::connectSlotsByName(SignInWindow);
    } // setupUi

    void retranslateUi(QWidget *SignInWindow)
    {
        SignInWindow->setWindowTitle(QCoreApplication::translate("SignInWindow", "Form", nullptr));
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("SignInWindow", "\320\237\320\276\321\210\321\202\320\260", nullptr));
        label->setText(QCoreApplication::translate("SignInWindow", "\320\222\321\205\321\226\320\264", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("SignInWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("SignInWindow", "\320\243\320\262\321\226\320\271\321\202\320\270", nullptr));
        backToFirstButton->setText(QCoreApplication::translate("SignInWindow", "\320\240\320\265\321\224\321\201\321\202\321\200\320\260\321\206\321\226\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignInWindow: public Ui_SignInWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNINWINDOW_H
