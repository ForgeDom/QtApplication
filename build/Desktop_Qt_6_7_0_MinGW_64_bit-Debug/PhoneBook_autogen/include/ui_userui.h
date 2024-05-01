/********************************************************************************
** Form generated from reading UI file 'userui.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERUI_H
#define UI_USERUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserUi
{
public:
    QTextEdit *textEdit;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTextEdit *textEdit_2;
    QWidget *tab_2;
    QTextEdit *textEdit_3;
    QListView *listView;

    void setupUi(QDialog *UserUi)
    {
        if (UserUi->objectName().isEmpty())
            UserUi->setObjectName("UserUi");
        UserUi->resize(800, 600);
        textEdit = new QTextEdit(UserUi);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 30, 111, 31));
        tabWidget = new QTabWidget(UserUi);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(140, 30, 641, 551));
        tab = new QWidget();
        tab->setObjectName("tab");
        textEdit_2 = new QTextEdit(tab);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(10, 10, 621, 31));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        textEdit_3 = new QTextEdit(tab_2);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(10, 10, 621, 31));
        tabWidget->addTab(tab_2, QString());
        listView = new QListView(UserUi);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(20, 60, 111, 521));

        retranslateUi(UserUi);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(UserUi);
    } // setupUi

    void retranslateUi(QDialog *UserUi)
    {
        UserUi->setWindowTitle(QCoreApplication::translate("UserUi", "Dialog", nullptr));
        textEdit->setHtml(QCoreApplication::translate("UserUi", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Admins</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("UserUi", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("UserUi", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserUi: public Ui_UserUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERUI_H
