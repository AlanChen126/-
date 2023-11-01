/********************************************************************************
** Form generated from reading UI file 'show_dag.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_DAG_H
#define UI_SHOW_DAG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_show_dagClass
{
public:

    void setupUi(QWidget *show_dagClass)
    {
        if (show_dagClass->objectName().isEmpty())
            show_dagClass->setObjectName(QString::fromUtf8("show_dagClass"));
        show_dagClass->resize(600, 400);

        retranslateUi(show_dagClass);

        QMetaObject::connectSlotsByName(show_dagClass);
    } // setupUi

    void retranslateUi(QWidget *show_dagClass)
    {
        show_dagClass->setWindowTitle(QCoreApplication::translate("show_dagClass", "\346\230\276\347\244\272\346\234\211\345\220\221\346\227\240\347\216\257\345\233\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class show_dagClass: public Ui_show_dagClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_DAG_H
