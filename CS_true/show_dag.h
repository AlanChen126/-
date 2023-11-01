#pragma once

#include <QWidget>
#include "ui_show_dag.h"

class show_dag : public QWidget
{
	Q_OBJECT

public:
	show_dag(QWidget *parent = nullptr);
	~show_dag();

private:
	Ui::show_dagClass ui;
};
