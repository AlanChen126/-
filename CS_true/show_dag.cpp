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
    pen.setColor(Qt::blue);
    pen.setWidth(2);
    painter.setPen(pen);

    for (int i = 0; i < courseNames.size(); ++i) {
        const QString& name = courseNames[i];
        int class_num = classNums[i];
        const QVector<int>& pre_class = prerequisites[i];

        int x = class_num * 100;
        int y = i * 60;

        // 绘制节点
        painter.drawEllipse(x, y, 20, 20);
        painter.drawText(x - 20, y + 30, name);

        // 绘制连接线
        for (int preClass : pre_class) {
            int preX = classNums[preClass] * 100;
            int preY = preClass * 60;
            painter.drawLine(x + 10, y, preX + 10, preY + 20);
        }
    }
}



void show_dag::paintEvent(QPaintEvent* event) {
    QPainter painter(this);
    display(painter); // 调用display函数来绘制图像
}
