#pragma once

#include <QWidget>
#include "ui_change_term.h"
#include <QMessageBox>

class change_term : public QWidget
{
	Q_OBJECT

public:
	change_term(QWidget *parent = nullptr);
	~change_term();

private:
	Ui::change_termClass ui;
private slots:
	void get_term_Button_clicked();//点击确定按钮后，提取用户输入的学分和学时的数据
signals:
	void changeReady(int class_num, int term_num);
};
