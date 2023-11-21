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
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_20;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label1_1;
    QTextEdit *max_xueshi1;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label1_2;
    QTextEdit *max_xuefen1;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_12_1;
    QTextEdit *max_xueshi2;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_12_2;
    QTextEdit *max_xuefen2;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label3_1;
    QTextEdit *max_xueshi3;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label3_2;
    QTextEdit *max_xuefen3;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label4_1;
    QTextEdit *max_xueshi4;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label4_2;
    QTextEdit *max_xuefen4;
    QSpacerItem *verticalSpacer_10;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label5_1;
    QTextEdit *max_xueshi5;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label5_2;
    QTextEdit *max_xuefen5;
    QSpacerItem *verticalSpacer_7;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label6_1;
    QTextEdit *max_xueshi6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label6_2;
    QTextEdit *max_xuefen6;
    QSpacerItem *verticalSpacer_8;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label7_1;
    QTextEdit *max_xueshi7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label7_2;
    QTextEdit *max_xuefen7;
    QSpacerItem *verticalSpacer_9;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label8_1;
    QTextEdit *max_xueshi8;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label8_2;
    QTextEdit *max_xuefen8;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *queding;
    QPushButton *quxiao;

    void setupUi(QWidget *set_window)
    {
        if (set_window->objectName().isEmpty())
            set_window->setObjectName(QString::fromUtf8("set_window"));
        set_window->resize(600, 400);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(set_window->sizePolicy().hasHeightForWidth());
        set_window->setSizePolicy(sizePolicy);
        set_window->setMinimumSize(QSize(600, 400));
        set_window->setMaximumSize(QSize(600, 400));
        verticalLayout_12 = new QVBoxLayout(set_window);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_5);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label1_1 = new QLabel(set_window);
        label1_1->setObjectName(QString::fromUtf8("label1_1"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label1_1->sizePolicy().hasHeightForWidth());
        label1_1->setSizePolicy(sizePolicy1);
        label1_1->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_12->addWidget(label1_1);

        max_xueshi1 = new QTextEdit(set_window);
        max_xueshi1->setObjectName(QString::fromUtf8("max_xueshi1"));
        max_xueshi1->setMaximumSize(QSize(16777215, 20));
        max_xueshi1->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        max_xueshi1->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_12->addWidget(max_xueshi1);


        verticalLayout_7->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label1_2 = new QLabel(set_window);
        label1_2->setObjectName(QString::fromUtf8("label1_2"));
        sizePolicy1.setHeightForWidth(label1_2->sizePolicy().hasHeightForWidth());
        label1_2->setSizePolicy(sizePolicy1);
        label1_2->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_13->addWidget(label1_2);

        max_xuefen1 = new QTextEdit(set_window);
        max_xuefen1->setObjectName(QString::fromUtf8("max_xuefen1"));
        max_xuefen1->setMaximumSize(QSize(16777215, 20));
        max_xuefen1->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        max_xuefen1->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_13->addWidget(max_xuefen1);


        verticalLayout_7->addLayout(horizontalLayout_13);


        verticalLayout_6->addLayout(verticalLayout_7);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_12_1 = new QLabel(set_window);
        label_12_1->setObjectName(QString::fromUtf8("label_12_1"));
        sizePolicy1.setHeightForWidth(label_12_1->sizePolicy().hasHeightForWidth());
        label_12_1->setSizePolicy(sizePolicy1);
        label_12_1->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_14->addWidget(label_12_1);

        max_xueshi2 = new QTextEdit(set_window);
        max_xueshi2->setObjectName(QString::fromUtf8("max_xueshi2"));
        max_xueshi2->setMaximumSize(QSize(16777215, 20));
        max_xueshi2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        max_xueshi2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_14->addWidget(max_xueshi2);


        verticalLayout_8->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_12_2 = new QLabel(set_window);
        label_12_2->setObjectName(QString::fromUtf8("label_12_2"));
        sizePolicy1.setHeightForWidth(label_12_2->sizePolicy().hasHeightForWidth());
        label_12_2->setSizePolicy(sizePolicy1);
        label_12_2->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_15->addWidget(label_12_2);

        max_xuefen2 = new QTextEdit(set_window);
        max_xuefen2->setObjectName(QString::fromUtf8("max_xuefen2"));
        max_xuefen2->setMaximumSize(QSize(16777215, 20));
        max_xuefen2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        max_xuefen2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_15->addWidget(max_xuefen2);


        verticalLayout_8->addLayout(horizontalLayout_15);


        verticalLayout_6->addLayout(verticalLayout_8);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label3_1 = new QLabel(set_window);
        label3_1->setObjectName(QString::fromUtf8("label3_1"));
        sizePolicy1.setHeightForWidth(label3_1->sizePolicy().hasHeightForWidth());
        label3_1->setSizePolicy(sizePolicy1);
        label3_1->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_16->addWidget(label3_1);

        max_xueshi3 = new QTextEdit(set_window);
        max_xueshi3->setObjectName(QString::fromUtf8("max_xueshi3"));
        max_xueshi3->setMaximumSize(QSize(16777215, 20));
        max_xueshi3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        max_xueshi3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_16->addWidget(max_xueshi3);


        verticalLayout_9->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label3_2 = new QLabel(set_window);
        label3_2->setObjectName(QString::fromUtf8("label3_2"));
        sizePolicy1.setHeightForWidth(label3_2->sizePolicy().hasHeightForWidth());
        label3_2->setSizePolicy(sizePolicy1);
        label3_2->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_17->addWidget(label3_2);

        max_xuefen3 = new QTextEdit(set_window);
        max_xuefen3->setObjectName(QString::fromUtf8("max_xuefen3"));
        max_xuefen3->setMaximumSize(QSize(16777215, 20));
        max_xuefen3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        max_xuefen3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_17->addWidget(max_xuefen3);


        verticalLayout_9->addLayout(horizontalLayout_17);


        verticalLayout_6->addLayout(verticalLayout_9);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label4_1 = new QLabel(set_window);
        label4_1->setObjectName(QString::fromUtf8("label4_1"));
        sizePolicy1.setHeightForWidth(label4_1->sizePolicy().hasHeightForWidth());
        label4_1->setSizePolicy(sizePolicy1);
        label4_1->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_18->addWidget(label4_1);

        max_xueshi4 = new QTextEdit(set_window);
        max_xueshi4->setObjectName(QString::fromUtf8("max_xueshi4"));
        max_xueshi4->setMaximumSize(QSize(16777215, 20));
        max_xueshi4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        max_xueshi4->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_18->addWidget(max_xueshi4);


        verticalLayout_10->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label4_2 = new QLabel(set_window);
        label4_2->setObjectName(QString::fromUtf8("label4_2"));
        sizePolicy1.setHeightForWidth(label4_2->sizePolicy().hasHeightForWidth());
        label4_2->setSizePolicy(sizePolicy1);
        label4_2->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_19->addWidget(label4_2);

        max_xuefen4 = new QTextEdit(set_window);
        max_xuefen4->setObjectName(QString::fromUtf8("max_xuefen4"));
        max_xuefen4->setMaximumSize(QSize(16777215, 20));
        max_xuefen4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        max_xuefen4->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_19->addWidget(max_xuefen4);


        verticalLayout_10->addLayout(horizontalLayout_19);


        verticalLayout_6->addLayout(verticalLayout_10);


        horizontalLayout_20->addLayout(verticalLayout_6);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_20->addItem(verticalSpacer_10);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label5_1 = new QLabel(set_window);
        label5_1->setObjectName(QString::fromUtf8("label5_1"));
        sizePolicy1.setHeightForWidth(label5_1->sizePolicy().hasHeightForWidth());
        label5_1->setSizePolicy(sizePolicy1);
        label5_1->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_8->addWidget(label5_1);

        max_xueshi5 = new QTextEdit(set_window);
        max_xueshi5->setObjectName(QString::fromUtf8("max_xueshi5"));
        max_xueshi5->setMaximumSize(QSize(16777215, 20));
        max_xueshi5->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        max_xueshi5->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_8->addWidget(max_xueshi5);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label5_2 = new QLabel(set_window);
        label5_2->setObjectName(QString::fromUtf8("label5_2"));
        sizePolicy1.setHeightForWidth(label5_2->sizePolicy().hasHeightForWidth());
        label5_2->setSizePolicy(sizePolicy1);
        label5_2->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_9->addWidget(label5_2);

        max_xuefen5 = new QTextEdit(set_window);
        max_xuefen5->setObjectName(QString::fromUtf8("max_xuefen5"));
        max_xuefen5->setMaximumSize(QSize(16777215, 20));
        max_xuefen5->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        max_xuefen5->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_9->addWidget(max_xuefen5);


        verticalLayout_3->addLayout(horizontalLayout_9);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_7);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label6_1 = new QLabel(set_window);
        label6_1->setObjectName(QString::fromUtf8("label6_1"));
        sizePolicy1.setHeightForWidth(label6_1->sizePolicy().hasHeightForWidth());
        label6_1->setSizePolicy(sizePolicy1);
        label6_1->setMaximumSize(QSize(16777215, 30));

        horizontalLayout->addWidget(label6_1);

        max_xueshi6 = new QTextEdit(set_window);
        max_xueshi6->setObjectName(QString::fromUtf8("max_xueshi6"));
        max_xueshi6->setMaximumSize(QSize(16777215, 20));
        max_xueshi6->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        max_xueshi6->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout->addWidget(max_xueshi6);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label6_2 = new QLabel(set_window);
        label6_2->setObjectName(QString::fromUtf8("label6_2"));
        sizePolicy1.setHeightForWidth(label6_2->sizePolicy().hasHeightForWidth());
        label6_2->setSizePolicy(sizePolicy1);
        label6_2->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_2->addWidget(label6_2);

        max_xuefen6 = new QTextEdit(set_window);
        max_xuefen6->setObjectName(QString::fromUtf8("max_xuefen6"));
        max_xuefen6->setMaximumSize(QSize(16777215, 20));
        max_xuefen6->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        max_xuefen6->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_2->addWidget(max_xuefen6);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_5->addLayout(verticalLayout);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_8);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label7_1 = new QLabel(set_window);
        label7_1->setObjectName(QString::fromUtf8("label7_1"));
        sizePolicy1.setHeightForWidth(label7_1->sizePolicy().hasHeightForWidth());
        label7_1->setSizePolicy(sizePolicy1);
        label7_1->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_6->addWidget(label7_1);

        max_xueshi7 = new QTextEdit(set_window);
        max_xueshi7->setObjectName(QString::fromUtf8("max_xueshi7"));
        max_xueshi7->setMaximumSize(QSize(16777215, 20));
        max_xueshi7->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        max_xueshi7->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_6->addWidget(max_xueshi7);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label7_2 = new QLabel(set_window);
        label7_2->setObjectName(QString::fromUtf8("label7_2"));
        sizePolicy1.setHeightForWidth(label7_2->sizePolicy().hasHeightForWidth());
        label7_2->setSizePolicy(sizePolicy1);
        label7_2->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_7->addWidget(label7_2);

        max_xuefen7 = new QTextEdit(set_window);
        max_xuefen7->setObjectName(QString::fromUtf8("max_xuefen7"));
        max_xuefen7->setMaximumSize(QSize(16777215, 20));
        max_xuefen7->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        max_xuefen7->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_7->addWidget(max_xuefen7);


        verticalLayout_2->addLayout(horizontalLayout_7);


        verticalLayout_5->addLayout(verticalLayout_2);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_9);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label8_1 = new QLabel(set_window);
        label8_1->setObjectName(QString::fromUtf8("label8_1"));
        sizePolicy1.setHeightForWidth(label8_1->sizePolicy().hasHeightForWidth());
        label8_1->setSizePolicy(sizePolicy1);
        label8_1->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_10->addWidget(label8_1);

        max_xueshi8 = new QTextEdit(set_window);
        max_xueshi8->setObjectName(QString::fromUtf8("max_xueshi8"));
        max_xueshi8->setMaximumSize(QSize(16777215, 20));
        max_xueshi8->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        max_xueshi8->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_10->addWidget(max_xueshi8);


        verticalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label8_2 = new QLabel(set_window);
        label8_2->setObjectName(QString::fromUtf8("label8_2"));
        sizePolicy1.setHeightForWidth(label8_2->sizePolicy().hasHeightForWidth());
        label8_2->setSizePolicy(sizePolicy1);
        label8_2->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_11->addWidget(label8_2);

        max_xuefen8 = new QTextEdit(set_window);
        max_xuefen8->setObjectName(QString::fromUtf8("max_xuefen8"));
        max_xuefen8->setMaximumSize(QSize(16777215, 20));
        max_xuefen8->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        max_xuefen8->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_11->addWidget(max_xuefen8);


        verticalLayout_4->addLayout(horizontalLayout_11);


        verticalLayout_5->addLayout(verticalLayout_4);


        horizontalLayout_20->addLayout(verticalLayout_5);


        verticalLayout_11->addLayout(horizontalLayout_20);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        queding = new QPushButton(set_window);
        queding->setObjectName(QString::fromUtf8("queding"));

        horizontalLayout_3->addWidget(queding);

        quxiao = new QPushButton(set_window);
        quxiao->setObjectName(QString::fromUtf8("quxiao"));

        horizontalLayout_3->addWidget(quxiao);


        verticalLayout_11->addLayout(horizontalLayout_3);


        verticalLayout_12->addLayout(verticalLayout_11);


        retranslateUi(set_window);

        QMetaObject::connectSlotsByName(set_window);
    } // setupUi

    void retranslateUi(QWidget *set_window)
    {
        set_window->setWindowTitle(QCoreApplication::translate("set_window", "\344\277\256\346\224\271\345\255\246\345\210\206\345\255\246\346\227\266", nullptr));
        label1_1->setText(QCoreApplication::translate("set_window", "\347\254\2541\345\255\246\346\234\237\346\234\200\345\244\247\345\255\246\346\227\266\346\225\260\357\274\232", nullptr));
        label1_2->setText(QCoreApplication::translate("set_window", "\347\254\2541\345\255\246\346\234\237\346\234\200\345\244\247\345\255\246\345\210\206\346\225\260\357\274\232", nullptr));
        label_12_1->setText(QCoreApplication::translate("set_window", "\347\254\2542\345\255\246\346\234\237\346\234\200\345\244\247\345\255\246\346\227\266\346\225\260\357\274\232", nullptr));
        label_12_2->setText(QCoreApplication::translate("set_window", "\347\254\2542\345\255\246\346\234\237\346\234\200\345\244\247\345\255\246\345\210\206\346\225\260\357\274\232", nullptr));
        label3_1->setText(QCoreApplication::translate("set_window", "\347\254\2543\345\255\246\346\234\237\346\234\200\345\244\247\345\255\246\346\227\266\346\225\260\357\274\232", nullptr));
        label3_2->setText(QCoreApplication::translate("set_window", "\347\254\2543\345\255\246\346\234\237\346\234\200\345\244\247\345\255\246\345\210\206\346\225\260\357\274\232", nullptr));
        label4_1->setText(QCoreApplication::translate("set_window", "\347\254\2544\345\255\246\346\234\237\346\234\200\345\244\247\345\255\246\346\227\266\346\225\260\357\274\232", nullptr));
        label4_2->setText(QCoreApplication::translate("set_window", "\347\254\2544\345\255\246\346\234\237\346\234\200\345\244\247\345\255\246\345\210\206\346\225\260\357\274\232", nullptr));
        label5_1->setText(QCoreApplication::translate("set_window", "\347\254\2545\345\255\246\346\234\237\346\234\200\345\244\247\345\255\246\346\227\266\346\225\260\357\274\232", nullptr));
        label5_2->setText(QCoreApplication::translate("set_window", "\347\254\2545\345\255\246\346\234\237\346\234\200\345\244\247\345\255\246\345\210\206\346\225\260\357\274\232", nullptr));
        label6_1->setText(QCoreApplication::translate("set_window", "\347\254\2546\345\255\246\346\234\237\346\234\200\345\244\247\345\255\246\346\227\266\346\225\260\357\274\232", nullptr));
        label6_2->setText(QCoreApplication::translate("set_window", "\347\254\2546\345\255\246\346\234\237\346\234\200\345\244\247\345\255\246\345\210\206\346\225\260\357\274\232", nullptr));
        label7_1->setText(QCoreApplication::translate("set_window", "\347\254\2547\345\255\246\346\234\237\346\234\200\345\244\247\345\255\246\346\227\266\346\225\260\357\274\232", nullptr));
        label7_2->setText(QCoreApplication::translate("set_window", "\347\254\2547\345\255\246\346\234\237\346\234\200\345\244\247\345\255\246\345\210\206\346\225\260\357\274\232", nullptr));
        label8_1->setText(QCoreApplication::translate("set_window", "\347\254\2548\345\255\246\346\234\237\346\234\200\345\244\247\345\255\246\346\227\266\346\225\260\357\274\232", nullptr));
        label8_2->setText(QCoreApplication::translate("set_window", "\347\254\2548\345\255\246\346\234\237\346\234\200\345\244\247\345\255\246\345\210\206\346\225\260\357\274\232", nullptr));
        queding->setText(QCoreApplication::translate("set_window", "\347\241\256\345\256\232", nullptr));
        quxiao->setText(QCoreApplication::translate("set_window", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class set_window: public Ui_set_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SET_WINDOW_H
