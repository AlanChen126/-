#pragma once

#include <QWidget>
#include "ui_show_dag.h"
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QDebug>
#include <QVector>
#include <vector>
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QFont>

class show_dag : public QWidget
{
	Q_OBJECT

public:
	show_dag(QWidget *parent = nullptr);
	~show_dag();
	void display(QPainter& painter);//展示有向无环图
	void paintEvent(QPaintEvent* event);
private:
	Ui::show_dagClass ui;
};
