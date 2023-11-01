/********************************************************************************
** Form generated from reading UI file 'class_system.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS_SYSTEM_H
#define UI_CLASS_SYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_class_systemClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *set;
    QPushButton *choose;
    QPushButton *save;
    QPushButton *fallback;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *show_dag;
    QPushButton *change_term;
    QTableWidget *class_table;
    QTextBrowser *debug;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *class_systemClass)
    {
        if (class_systemClass->objectName().isEmpty())
            class_systemClass->setObjectName(QString::fromUtf8("class_systemClass"));
        class_systemClass->resize(1000, 600);
        class_systemClass->setMinimumSize(QSize(1000, 600));
        class_systemClass->setMaximumSize(QSize(1000, 600));
        centralWidget = new QWidget(class_systemClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        set = new QPushButton(centralWidget);
        set->setObjectName(QString::fromUtf8("set"));

        horizontalLayout->addWidget(set);

        choose = new QPushButton(centralWidget);
        choose->setObjectName(QString::fromUtf8("choose"));

        horizontalLayout->addWidget(choose);

        save = new QPushButton(centralWidget);
        save->setObjectName(QString::fromUtf8("save"));

        horizontalLayout->addWidget(save);

        fallback = new QPushButton(centralWidget);
        fallback->setObjectName(QString::fromUtf8("fallback"));

        horizontalLayout->addWidget(fallback);

        horizontalSpacer = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        horizontalLayout->addWidget(label, 0, Qt::AlignHCenter);

        horizontalSpacer_2 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        show_dag = new QPushButton(centralWidget);
        show_dag->setObjectName(QString::fromUtf8("show_dag"));

        horizontalLayout->addWidget(show_dag);

        change_term = new QPushButton(centralWidget);
        change_term->setObjectName(QString::fromUtf8("change_term"));

        horizontalLayout->addWidget(change_term);


        verticalLayout->addLayout(horizontalLayout);

        class_table = new QTableWidget(centralWidget);
        if (class_table->columnCount() < 8)
            class_table->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        class_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        class_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        class_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        class_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        class_table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        class_table->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        class_table->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        class_table->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        if (class_table->rowCount() < 8)
            class_table->setRowCount(8);
        QBrush brush(QColor(240, 240, 240, 255));
        brush.setStyle(Qt::NoBrush);
        QBrush brush1(QColor(240, 240, 240, 255));
        brush1.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setBackground(brush1);
        __qtablewidgetitem8->setForeground(brush);
        class_table->setItem(0, 0, __qtablewidgetitem8);
        class_table->setObjectName(QString::fromUtf8("class_table"));
        class_table->setEnabled(false);
        class_table->setRowCount(8);
        class_table->horizontalHeader()->setDefaultSectionSize(120);

        verticalLayout->addWidget(class_table);

        debug = new QTextBrowser(centralWidget);
        debug->setObjectName(QString::fromUtf8("debug"));
        debug->setMinimumSize(QSize(0, 250));
        debug->setMaximumSize(QSize(16777215, 250));
        debug->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        debug->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout->addWidget(debug);


        verticalLayout_2->addLayout(verticalLayout);

        class_systemClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(class_systemClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        class_systemClass->setStatusBar(statusBar);

        retranslateUi(class_systemClass);

        QMetaObject::connectSlotsByName(class_systemClass);
    } // setupUi

    void retranslateUi(QMainWindow *class_systemClass)
    {
        class_systemClass->setWindowTitle(QCoreApplication::translate("class_systemClass", "\346\216\222\350\257\276\347\263\273\347\273\237", nullptr));
        set->setText(QCoreApplication::translate("class_systemClass", "\345\255\246\346\227\266", nullptr));
        choose->setText(QCoreApplication::translate("class_systemClass", "\350\207\252\345\212\250\346\216\222\350\257\276", nullptr));
        save->setText(QCoreApplication::translate("class_systemClass", "\344\277\235\345\255\230", nullptr));
        fallback->setText(QCoreApplication::translate("class_systemClass", "\345\233\236\351\200\200", nullptr));
        label->setText(QCoreApplication::translate("class_systemClass", "\351\200\211\350\257\276\347\263\273\347\273\237", nullptr));
        show_dag->setText(QCoreApplication::translate("class_systemClass", "\346\230\276\347\244\272\350\257\276\347\250\213\345\205\210\345\220\216\345\205\263\347\263\273", nullptr));
        change_term->setText(QCoreApplication::translate("class_systemClass", "\350\260\203\346\225\264\350\257\276\347\250\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem = class_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("class_systemClass", "\347\254\254\344\270\200\345\255\246\346\234\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = class_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("class_systemClass", "\347\254\254\344\272\214\345\255\246\346\234\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = class_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("class_systemClass", "\347\254\254\344\270\211\345\255\246\346\234\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = class_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("class_systemClass", "\347\254\254\345\233\233\345\255\246\346\234\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = class_table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("class_systemClass", "\347\254\254\344\272\224\345\255\246\346\234\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = class_table->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("class_systemClass", "\347\254\254\345\205\255\345\255\246\346\234\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = class_table->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("class_systemClass", "\347\254\254\344\270\203\345\255\246\346\234\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = class_table->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("class_systemClass", "\347\254\254\345\205\253\345\255\246\346\234\237", nullptr));

        const bool __sortingEnabled = class_table->isSortingEnabled();
        class_table->setSortingEnabled(false);
        class_table->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class class_systemClass: public Ui_class_systemClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS_SYSTEM_H
