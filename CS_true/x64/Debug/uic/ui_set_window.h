/********************************************************************************
** Form generated from reading UI file 'set_window.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SET_WINDOW_H
#define UI_SET_WINDOW_H

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

class Ui_set_window
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTextEdit *max_xueshi;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QTextEdit *max_xuefen;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *queding;
    QPushButton *quxiao;

    void setupUi(QWidget *set_window)
    {
        if (set_window->objectName().isEmpty())
            set_window->setObjectName(QString::fromUtf8("set_window"));
        set_window->resize(300, 200);
        set_window->setMinimumSize(QSize(300, 200));
        set_window->setMaximumSize(QSize(300, 200));
        verticalLayout_2 = new QVBoxLayout(set_window);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(set_window);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        max_xueshi = new QTextEdit(set_window);
        max_xueshi->setObjectName(QString::fromUtf8("max_xueshi"));
        max_xueshi->setMaximumSize(QSize(16777215, 20));
        max_xueshi->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        max_xueshi->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout->addWidget(max_xueshi);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(set_window);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        max_xuefen = new QTextEdit(set_window);
        max_xuefen->setObjectName(QString::fromUtf8("max_xuefen"));
        max_xuefen->setMaximumSize(QSize(16777215, 20));
        max_xuefen->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        max_xuefen->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_2->addWidget(max_xuefen);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        queding = new QPushButton(set_window);
        queding->setObjectName(QString::fromUtf8("queding"));

        horizontalLayout_3->addWidget(queding);

        quxiao = new QPushButton(set_window);
        quxiao->setObjectName(QString::fromUtf8("quxiao"));

        horizontalLayout_3->addWidget(quxiao);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(set_window);

        QMetaObject::connectSlotsByName(set_window);
    } // setupUi

    void retranslateUi(QWidget *set_window)
    {
        set_window->setWindowTitle(QCoreApplication::translate("set_window", "\344\277\256\346\224\271\345\255\246\345\210\206\345\255\246\346\227\266", nullptr));
        label->setText(QCoreApplication::translate("set_window", "\346\257\217\345\255\246\346\234\237\346\234\200\345\244\247\345\255\246\346\227\266\346\225\260\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("set_window", "\346\257\217\345\255\246\346\234\237\346\234\200\345\244\247\345\255\246\346\227\266\346\225\260\357\274\232", nullptr));
        queding->setText(QCoreApplication::translate("set_window", "\347\241\256\345\256\232", nullptr));
        quxiao->setText(QCoreApplication::translate("set_window", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class set_window: public Ui_set_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SET_WINDOW_H
