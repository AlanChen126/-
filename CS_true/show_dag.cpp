#include "show_dag.h"

show_dag::show_dag(QWidget* parent) : QWidget(parent) {
    ui.setupUi(this);
}

show_dag::~show_dag() {}

void show_dag::display(QPainter& painter) {
    // 读取JSON文件
    QFile file("课程数据.json");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "无法打开JSON文件.";
        return;
    }

    QByteArray jsonData = file.readAll();
    QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData);

    if (jsonDoc.isNull()) {
        qDebug() << "JSON解析失败.";
        return;
    }

    // 解析JSON数据
    QJsonObject jsonObj = jsonDoc.object();
    QJsonArray coursesArray = jsonObj["courses"].toArray();

    // 保存课程信息，以备后续绘制
    QVector<QString> courseNames;
    QVector<int> classNums;
    QVector<QVector<int>> prerequisites;

    for (const QJsonValue& courseValue : coursesArray) {
        if (courseValue.isObject()) {
            QJsonObject courseObj = courseValue.toObject();

            QString name = courseObj["name"].toString();
            int class_num = courseObj["class_num"].toInt();

            QVector<int> pre_class;
            QJsonArray preClassArray = courseObj["pre_class"].toArray();
            for (const QJsonValue& preReqValue : preClassArray) {
                if (preReqValue.isDouble()) {
                    pre_class.push_back(preReqValue.toInt());
                }
            }

            courseNames.push_back(name);
            classNums.push_back(class_num);
            prerequisites.push_back(pre_class);
        }
    }

    // 现在你拥有所有课程信息，可以绘制有向无环图
    painter.setRenderHint(QPainter::Antialiasing);

    QPen pen;
    //pen.setColor(Qt::blue);
    pen.setWidth(1.5);
    //painter.setPen(pen);

    QFont font;
    font.setPointSize(8); // 设置字体大小为 12 像素
    painter.setFont(font); // 应用修改后的字体

    for (int i = 0; i < courseNames.size(); ++i) {
        if (i >= 0 && i <= 3) {
            pen.setColor(Qt::blue);
            painter.setPen(pen);
        }
        if (i >= 4 && i <= 8) {
            pen.setColor(Qt::green);
            painter.setPen(pen);
        }
        if (i >= 9 && i <= 10) {
            pen.setColor(Qt::red);
            painter.setPen(pen);
        }
        if (i >= 11) {
            pen.setColor(Qt::black);
            painter.setPen(pen);
        }
        const QString& name = courseNames[i];
        int class_num = classNums[i];
        const QVector<int>& pre_class = prerequisites[i];

        int x = (class_num+1) * 20;
        int y = (i+1) * 20;

        // 绘制节点
        painter.drawEllipse(x, y, 8, 8);
        painter.drawText(x - 15, y + 20, name);

        // 绘制连接线
        for (int preClass : pre_class) {
            int preX = classNums[preClass] * 20;
            int preY = preClass * 20;
            painter.drawLine(x + 5, y, preX + 22, preY + 27);
        }
    }
}



void show_dag::paintEvent(QPaintEvent* event) {
    QPainter painter(this);
    display(painter); // 调用display函数来绘制图像
}
