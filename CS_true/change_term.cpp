#include "change_term.h"

change_term::change_term(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	//点击按钮获取数据
	connect(ui.queding, SIGNAL(clicked()), this, SLOT(get_term_Button_clicked()));//点击确定按钮存储数据并判断输入是否正确
}

change_term::~change_term()
{}

void change_term::get_term_Button_clicked()
{
	//获取Qstring
	QString class_Text = ui.class_name->toPlainText();
	QString term_Text = ui.term_num_button->toPlainText();
	//把Qstring转化为int
	bool ok_class,ok_term;
	//把QString转化为string
	//std::string class_string = class_Text.toStdString();
	int class_num = class_Text.toInt(&ok_class);
	int term_num = term_Text.toInt(&ok_term);
	//添加警告窗口
	if (ok_class && ok_term) {
		emit changeReady(class_num, term_num);

		QMessageBox::critical(this, tr("危险弹窗"), tr("正确"),
			QMessageBox::Save | QMessageBox::Discard, QMessageBox::Discard);

	}
	else {
		QMessageBox::critical(this, tr("危险弹窗"), tr("错误"),
			QMessageBox::Save | QMessageBox::Discard, QMessageBox::Discard);

	}
}