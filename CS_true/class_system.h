#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_class_system.h"
#include "set_window.h"
#include "ui_set_window.h"
#include "change_term.h"
#include "ui_change_term.h"
#include "show_dag.h"
#include "ui_show_dag.h"
#include "core_code.cpp"

#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QDebug>
#include <QTextCodec>
#include <vector>




class class_system : public QMainWindow
{
    Q_OBJECT

public:
    class_system(QWidget *parent = nullptr);
    ~class_system();

private:
    Ui::class_systemClass ui;
    set_window* set_data_window;
    change_term* change_term_window;
    show_dag* show_dag_window;

    DAG dag;

private slots://槽函数
    void set_data_Button_clicked();//点击设置学分按钮出现设置学分的界面
    void change_term_Button_clicked();//点击切换课程所在学期
    void show_dag_Button_clicked();//点击显示有向无环图
    void handleDataReady(vector<int> xueshi, vector<int> xuefen);
    void show_class_Button_clicked();//点击显示课表按钮显示当前的排课结果
    void handlechangeReady(int class_num, int term_num);
    void save_Button_clicked();//点击保存按钮保存当前课表信息
    void fallback_Button_clicked();//点击回退按钮把排课记录返回到上一次修改
    void show_table(const vector<vector<string>>& classAssignments);//将排课结果保存在表格中
};
