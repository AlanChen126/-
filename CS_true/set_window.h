#pragma once

#include <QWidget>
#include "ui_set_window.h"
#include <QMessageBox>
#include <QDebug>

class set_window : public QWidget
{
	Q_OBJECT

public:
	set_window(QWidget *parent = nullptr);
	~set_window();

private:
	Ui::set_window ui;
private slots:
	void get_data_Button_clicked();//点击确定按钮后，提取用户输入的学分和学时的数据
signals:
	void dataReady(int xueshi, int xuefen);

};
