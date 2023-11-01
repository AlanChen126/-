#include "set_window.h"

set_window::set_window(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	//点击按钮获取数据
	connect(ui.queding, SIGNAL(clicked()), this, SLOT(get_data_Button_clicked()));//点击确定按钮存储数据并判断输入是否正确
}

set_window::~set_window()
{}

void set_window::get_data_Button_clicked()
{
	//获取Qstring
	QString xueshiText = ui.max_xueshi->toPlainText();
	QString xuefenText = ui.max_xuefen->toPlainText();
	//把Qstring转化为int
	bool ok_xueshi,ok_xuefen;
	int xueshiValue = xueshiText.toInt(&ok_xueshi);
	int xuefenValue = xuefenText.toInt(&ok_xuefen);
	//添加警告窗口
	if (ok_xuefen && ok_xueshi) {
		//在这里添加把输入的学时和学分数获取到对应函数中
		emit dataReady(xueshiValue, xuefenValue);
		 
		QMessageBox::critical(this, tr("危险弹窗"), tr("正确"),
			QMessageBox::Save | QMessageBox::Discard, QMessageBox::Discard);

	}
	else {
		QMessageBox::critical(this, tr("危险弹窗"), tr("错误"),
			QMessageBox::Save | QMessageBox::Discard, QMessageBox::Discard);

	}

	
}