/********************************************************************************
** Form generated from reading UI file 'change_term.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_TERM_H
#define UI_CHANGE_TERM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_change_termClass
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTextEdit *class_name;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QTextEdit *term_num_button;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *queding;
    QPushButton *quxiao;

    void setupUi(QWidget *change_termClass)
    {
        if (change_termClass->objectName().isEmpty())
            change_termClass->setObjectName(QString::fromUtf8("change_termClass"));
        change_termClass->resize(300, 200);
        change_termClass->setMinimumSize(QSize(300, 200));
        change_termClass->setMaximumSize(QSize(300, 200));
        verticalLayout_2 = new QVBoxLayout(change_termClass);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(change_termClass);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        class_name = new QTextEdit(change_termClass);
        class_name->setObjectName(QString::fromUtf8("class_name"));
        class_name->setMinimumSize(QSize(0, 20));
        class_name->setMaximumSize(QSize(1000, 20));
        class_name->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        class_name->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout->addWidget(class_name);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(change_termClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        term_num_button = new QTextEdit(change_termClass);
        term_num_button->setObjectName(QString::fromUtf8("term_num_button"));
        term_num_button->setMinimumSize(QSize(0, 20));
        term_num_button->setMaximumSize(QSize(1000, 20));
        term_num_button->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        term_num_button->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_2->addWidget(term_num_button);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        queding = new QPushButton(change_termClass);
        queding->setObjectName(QString::fromUtf8("queding"));

        horizontalLayout_3->addWidget(queding);

        quxiao = new QPushButton(change_termClass);
        quxiao->setObjectName(QString::fromUtf8("quxiao"));

        horizontalLayout_3->addWidget(quxiao);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(change_termClass);

        QMetaObject::connectSlotsByName(change_termClass);
    } // setupUi

    void retranslateUi(QWidget *change_termClass)
    {
        change_termClass->setWindowTitle(QCoreApplication::translate("change_termClass", "\344\277\256\346\224\271\350\257\276\347\250\213\346\211\200\345\234\250\345\255\246\346\234\237", nullptr));
        label->setText(QCoreApplication::translate("change_termClass", "\344\277\256\346\224\271\350\257\276\347\250\213\347\232\204\345\220\215\347\247\260\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("change_termClass", "\344\277\256\346\224\271\345\210\260\347\232\204\345\255\246\346\234\237\346\225\260\357\274\232", nullptr));
        queding->setText(QCoreApplication::translate("change_termClass", "\347\241\256\345\256\232", nullptr));
        quxiao->setText(QCoreApplication::translate("change_termClass", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change_termClass: public Ui_change_termClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_TERM_H
