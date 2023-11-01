#include "class_system.h"

//把json文件的数据传入courses结构体数组中
void load_json(vector<Course>& courses);

class_system::class_system(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    //新建DAG对象
    vector<Course> courses;
    load_json(courses);
    dag = DAG(courses);//一定是这样写！

    //class_table表格
    ui.class_table->horizontalHeader()->setStretchLastSection(true); //设置表头充满表格的宽度
    ui.class_table->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置表格内容不可编辑
    ui.class_table->setAlternatingRowColors(true);
    //设置表头的边框
    ui.class_table->horizontalHeader()->setStyleSheet("QHeaderView::section {border: border-right: 1px solid black;}");
    ui.class_table->verticalHeader()->setStyleSheet("QHeaderView::section {border: border-right: 1px solid black;}");
    //点击按钮显示界面
    connect(ui.set, SIGNAL(clicked()), this, SLOT(set_data_Button_clicked()));//点击set按钮设置学时
    connect(ui.change_term, SIGNAL(clicked()), this, SLOT(change_term_Button_clicked()));//点击change按钮切换课程所在学期
    connect(ui.show_dag, SIGNAL(clicked()), this, SLOT(show_dag_Button_clicked()));//点击显示有向图按钮显示当前的有向图
    connect(ui.choose, SIGNAL(clicked()), this, SLOT(show_class_Button_clicked()));//点击显示课表按钮显示当前排课结果
    connect(ui.save, SIGNAL(clicked()), this, SLOT(save_Button_clicked()));//点击保存按钮保存当前课表信息
    connect(ui.fallback, SIGNAL(clicked()), this, SLOT(fallback_Button_clicked()));//点击回退按钮把排课记录返回到上一次修改
}

class_system::~class_system()
{}

//修改学时和学分
void class_system::set_data_Button_clicked()
{
    // 创建 set_data 窗口对象
    set_window* set_data_window = new set_window(this);
    set_data_window->setWindowFlags(Qt::Window);//要先设置成窗口属性
    set_data_window->show();

    // 连接信号与槽.获得学分学时数据   设置成点击按钮就启动sort，检测是否拿到数据
    connect(set_data_window, &set_window::dataReady, this, &class_system::handleDataReady);
    //后续函数在set_window中实现
}

//修改课程所在学期
void class_system::change_term_Button_clicked()
{
    //创建窗口对象
    change_term* change_term_window = new change_term(this);
    change_term_window->setWindowFlags(Qt::Window);//要先设置成窗口属性
    change_term_window->show();

    // 连接信号与槽.获得学分学时数据   设置成点击按钮就启动sort，检测是否拿到数据
    connect(change_term_window, &change_term::changeReady, this, &class_system::handlechangeReady);
}

//展示有向无环图
void class_system::show_dag_Button_clicked()
{
    show_dag* show_dag_window = new show_dag(this);
    show_dag_window->setWindowFlags(Qt::Window);//要先设置成窗口属性
    show_dag_window->show();
}

//点击保存按钮保存当前课表信息
void class_system::save_Button_clicked()
{
    QString result;
    result = dag.saveCurrentAssignment();
    ui.debug->append(result);
}

//点击回退按钮把排课记录返回到上一次修改
void class_system::fallback_Button_clicked()
{
    QString result;
    result = dag.undo();
    ui.debug->append(result);
}

//处理从设置学分界面得到的学分和学时的数据
void class_system::handleDataReady(int xueshi, int xuefen) {
    // 在这里调用 sort 函数，并传递 xueshi 和 xuefen 值
    cout << 111 << endl;
    dag.printAdjacencyMatrix();//可以输出！！
    cout << 222 << endl;
    dag.sort(xueshi, xuefen);
    //QString result = dag.sort(xueshi, xuefen); // 获取排序结果字符串
    //ui.debug->setText(result); // 将结果显示在 QTextBrowser 中
    cout << 666 << endl;
}

void class_system::handlechangeReady(int class_num, int term_num)
{
    cout << 777 << endl;
    QString result = dag.adjust_term(class_num, term_num); // 获取排序结果字符串
    ui.debug->append(result); // 将结果显示在 QTextBrowser 中，不会覆盖原先内容
    //dag.adjust(class_num,term_num);
    cout << 999 << endl;
}


//把json文件的数据传入courses结构体数组中
void load_json(vector<Course>& courses)
{
    QFile file("课程数据.json");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qWarning() << "无法打开JSON文件.";
        return;
    }
    
    QByteArray jsonData = file.readAll();
    QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData);

    if (jsonDoc.isNull()) {
        qWarning() << "JSON解析失败.";
        return;
    }

    QJsonObject jsonObj = jsonDoc.object();
    QJsonArray coursesArray = jsonObj["courses"].toArray();

    for (const QJsonValue& courseValue : coursesArray) {
        if (courseValue.isObject()) {
            QJsonObject courseObj = courseValue.toObject();

            QString name = courseObj["name"].toString();
            int class_num = courseObj["class_num"].toInt();

            vector<int> pre_class;
            QJsonArray preClassArray = courseObj["pre_class"].toArray();
            for (const QJsonValue& preReqValue : preClassArray) {
                if (preReqValue.isDouble()) {
                    pre_class.push_back(preReqValue.toInt());
                }
            }

            int score = courseObj["score"].toInt();
            int hours = courseObj["hours"].toInt();

            courses.push_back(Course(name.toStdString(), class_num, pre_class, score, hours));
        }
    }

    //输出一遍所有的结构体数组
    for (const Course& course : courses) {
        cout << "课程名: " << course.name << endl;
        cout << "课程序号: " << course.class_num << endl;

        cout << "先修课程序号: ";
        for (int pre_req : course.pre_class) {
            cout << pre_req << " ";
        }
        cout << endl;

        cout << "学分: " << course.score << endl;
        cout << "学时: " << course.hours << endl;

        cout << "----------------------" << endl;
    }
}

void class_system::show_class_Button_clicked()
{
    QString result = dag.show_result(); // 获取排序结果字符串
    //ui.debug->setText(result); // 将结果显示在 QTextBrowser 中，会覆盖原先内容
    ui.debug->append(result); // 将结果显示在 QTextBrowser 中，不会覆盖原先内容
}