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
    std::vector<int> xueshiValues(8);  // 初始化大小为8的vector
    std::vector<int> xuefenValues(8);  // 初始化大小为8的vector
    std::vector<QString> xueshiTextArray(8);  // 初始化大小为8的vector
    std::vector<QString> xuefenTextArray(8);  // 初始化大小为8的vector

    // 使用循环遍历文本字段
    for (int i = 1; i <= 8; ++i) {
        QString xueshiText = this->findChild<QTextEdit*>(QString("max_xueshi%1").arg(i))->toPlainText();
        QString xuefenText = this->findChild<QTextEdit*>(QString("max_xuefen%1").arg(i))->toPlainText();

        // 将文本值添加到数组中
        xueshiTextArray[i - 1] = xueshiText;
        xuefenTextArray[i - 1] = xuefenText;
    }

    //
    // // 输出 xueshiTextArray 和 xuefenTextArray 的值
    qDebug() << "xueshiTextArray:" << xueshiTextArray;
    qDebug() << "xuefenTextArray:" << xuefenTextArray;
    //

    // 将文本值转换为整数并存储到 xueshiValues 和 xuefenValues 中
    for (int i = 0; i < xueshiTextArray.size(); ++i) {
        bool ok_xueshi, ok_xuefen;
        int xueshiValue = xueshiTextArray[i].toInt(&ok_xueshi);
        int xuefenValue = xuefenTextArray[i].toInt(&ok_xuefen);

        if (ok_xueshi && ok_xuefen) {
            xueshiValues[i] = xueshiValue;
            xuefenValues[i] = xuefenValue;
        }
        else {
            QMessageBox::critical(this, tr("危险弹窗"), tr("错误在第 %1 行").arg(i + 1),
                QMessageBox::Save | QMessageBox::Discard, QMessageBox::Discard);
            return; // 如果有错误，停止处理
        }
    }

    //
    qDebug() << "xueshiValues:" << xueshiValues;
    qDebug() << "xuefenValues:" << xuefenValues;
    //

    // 发射信号，传递获取到的数值
    emit dataReady(xueshiValues, xuefenValues);

    QMessageBox::critical(this, tr("危险弹窗"), tr("正确"),
        QMessageBox::Save | QMessageBox::Discard, QMessageBox::Discard);
}