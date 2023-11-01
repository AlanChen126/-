//#include <iostream>
//#include<stdlib.h>
//#include <vector>
//#include <stack>
//#include <fstream>
//#include <QCoreApplication>
//#include <QFile>
//#include <QJsonDocument>
//#include <QJsonObject>
//#include <QJsonArray>
//#include <QDebug>
//
//using namespace std;
//
//// 定义课程结构体节点
//struct Course {
//    QString name;        // 课程名
//    int class_num;       // 课程序号   1,2,3,4,5,6...
//    QVector<int> pre_class;  // 先修课程序号的数组
//    int score;           // 学分
//    int hours;           // 学时
//
//    // 构造函数
//    Course(const QString& _name, int _class_num, const QVector<int>& _pre_class, int _score, int _hours)
//        : name(_name), class_num(_class_num), pre_class(_pre_class), score(_score), hours(_hours) {}
//};
//
//// 定义有向图类
//class DAG {
//public:
//    vector<Course> courses_list;           // 记录课程信息的数组
//    vector<vector<bool>> adjacencyMatrix;  // 课程的二维数组（邻接矩阵）来记录先修课程
//
//    // 记录每门课程的学期分配情况，-1表示未分配，若被分配，就存储对应的学期
//    vector<int> assignment;
//
//    // 存储每个学期排课后的学时数
//    vector<int> currentSemesterHours;      // 每个学期的学时总数
//    vector<int> currentSemesterCredits;    // 每个学期的学分总数
//
//    DAG(const vector<Course>& _courses) : courses_list(_courses) {
//        // 初始化邻接矩阵
//        int numCourses = _courses.size();
//        adjacencyMatrix.resize(numCourses, vector<bool>(numCourses, false));
//
//        // 填充邻接矩阵，若j是i的先修课程，则[i][j] == true
//        for (const Course& course : _courses) {
//            for (int prereq : course.pre_class) {
//                adjacencyMatrix[course.class_num][prereq] = true;
//            }
//        }
//    }
//
//    // 打印邻接矩阵
//    void printAdjacencyMatrix() {
//        for (const vector<bool>& row : adjacencyMatrix) {
//            for (bool isPrereq : row) {
//                cout << isPrereq << " ";
//            }
//            cout << endl;
//        }
//    }
//
//    void sort(int maxHoursPerSemester, int maxCreditsPerSemester) {
//        int numCourses = courses_list.size();
//        vector<int> inDegree(numCourses, 0);
//        assignment.resize(numCourses, -1);
//        int currentSemester = 1;
//        currentSemesterHours.resize(8, 0);
//        currentSemesterCredits.resize(8, 0);
//        int coursesAssigned = 0;
//
//        // 记录每一个课程的入度
//        for (int i = 0; i < numCourses; ++i) {
//            for (int k = 0; k < numCourses; k++) {
//                if (adjacencyMatrix[i][k]) {
//                    inDegree[i]++;
//                }
//            }
//        }
//
//        while (coursesAssigned < numCourses) {
//            for (int i = 0; i < numCourses; ++i) {
//                if (inDegree[i] == 0 && assignment[i] == -1) {
//                    bool canAssign = true;
//
//                    // 检查是否存在未分配的先修课程，并且它们已经在之前的学期学完
//                    for (int prereq : courses_list[i].pre_class) {
//                        if (assignment[prereq] == -1 || assignment[prereq] >= currentSemester) {
//                            canAssign = false;
//                            break;
//                        }
//                    }
//
//                    if (canAssign &&
//                        currentSemesterHours[currentSemester] + courses_list[i].hours <= maxHoursPerSemester &&
//                        currentSemesterCredits[currentSemester] + courses_list[i].score <= maxCreditsPerSemester) {
//
//                        assignment[i] = currentSemester;
//                        currentSemesterHours[currentSemester] += courses_list[i].hours;
//                        currentSemesterCredits[currentSemester] += courses_list[i].score;
//                        coursesAssigned++;
//
//                        for (int j = 0; j < numCourses; j++) {
//                            if (adjacencyMatrix[j][i]) {
//                                inDegree[j]--;
//                            }
//                        }
//                    }
//                }
//            }
//
//            currentSemester++;
//
//            bool unassignedCoursesExist = false;
//            for (int i = 0; i < numCourses; ++i) {
//                if (assignment[i] == -1) {
//                    unassignedCoursesExist = true;
//                }
//            }
//
//            if (currentSemester > 8 && unassignedCoursesExist) {
//                cout << "排课失败，无法满足约束条件。" << endl;
//                return;
//            }
//        }
//
//        // 输出学期分配结果
//        for (int i = 0; i < 8; ++i) {
//            cout << "学期 " << i + 1 << " 课程：";
//            for (int j = 0; j < numCourses; ++j) {
//                if (assignment[j] == i + 1) {
//                    cout << courses_list[j].name.toStdString() << " ";
//                }
//            }
//            cout << endl;
//        }
//    }
//
//    // 允许用户手动调整课程的分配        前两个参数为最大学分和学时
//    //courseIndex:课程编号      newSemester:新的学期号
//    void adjust(int maxHoursPerSemester, int maxCreditsPerSemester, int courseIndex, int newSemester) {
//        /*int courseIndex;
//        int newSemester;*/
//
//        while (true) {
//            /*cout << "请输入要调整的课程编号 (-1退出)：";
//            cin >> courseIndex;
//
//            if (courseIndex == -1) {
//                break;
//            }
//
//            if (courseIndex < 0 || courseIndex >= courses_list.size()) {
//                cout << "无效的课程编号，请重新输入。" << endl;
//                continue;
//            }
//
//            cout << "请输入新的学期 (1-8)：";
//            cin >> newSemester;
//
//            if (newSemester < 1 || newSemester > 8) {
//                cout << "无效的学期，请重新输入。" << endl;
//                continue;
//            }*/
//
//            bool canAssign = true;
//
//            for (int prereq : courses_list[courseIndex].pre_class) {
//                if (assignment[prereq] == -1 || assignment[prereq] >= newSemester) {
//                    canAssign = false;
//                    break;
//                }
//            }
//
//            for (int i = 0; i < courses_list.size(); ++i) {
//                if (assignment[i] != -1) {
//                    for (int prereq : courses_list[i].pre_class) {
//                        if (assignment[prereq] == -1 || assignment[prereq] >= newSemester) {
//                            canAssign = false;
//                            break;
//                        }
//                    }
//                }
//            }
//
//            if (canAssign &&
//                currentSemesterHours[newSemester] + courses_list[courseIndex].hours <= maxHoursPerSemester &&
//                currentSemesterCredits[newSemester] + courses_list[courseIndex].score <= maxCreditsPerSemester) {
//
//                if (assignment[courseIndex] != -1) {
//                    currentSemesterHours[newSemester] -= courses_list[courseIndex].hours;
//                    currentSemesterCredits[newSemester] -= courses_list[courseIndex].score;
//                }
//
//                assignment[courseIndex] = newSemester;
//                currentSemesterHours[newSemester] += courses_list[courseIndex].hours;
//                currentSemesterCredits[newSemester] += courses_list[courseIndex].score;
//                cout << "已调整课程分配。" << endl;
//            }
//            else {
//                cout << "无法调整课程分配，不满足约束条件。" << endl;
//            }
//        }
//    }
//};

#include <iostream>
#include<stdlib.h>
#include <vector>
#include <stack>
//#include "json/json.h"
//#include "json/json-forwards.h"
#include <iostream>
#include <fstream>
//#include "jsoncpp.cpp"
#include <QString>

using namespace std;
//using namespace Json;  // 取消Json::前缀

// 定义课程结构体节点
struct Course {
    string name;//课程名
    int class_num;//课程序号   1,2,3,4,5,6...
    vector<int> pre_class;//先修课程序号的数组
    int score;//学分
    int hours;//学时

    // 构造函数
    Course(string _name, int _class_num, vector<int> _pre_class, int _score, int _hours)
        : name(_name), class_num(_class_num), pre_class(_pre_class), score(_score), hours(_hours) {}
};

// 定义有向图类
class DAG {
public:
    int max_hour_per, max_score_per;//记录每学期最大学时和最大学分

    vector<Course> courses_list;//记录课程信息的数组
    vector<vector<bool>> adjacencyMatrix;//课程的二维数组（邻接矩阵）来记录先修课程

    // 记录每门课程的学期分配情况，-1表示未分配，若被分配，就存储对应的学期
    vector<int> assignment;

    //存储每个学期排课后的学时数
    vector<int> currentSemesterHours; // 每个学期的学时总数
    vector<int> currentSemesterCredits; // 每个学期的学分总数

    //DAG的空构造函数(DAG dag必需)
    DAG() {}

    DAG(const vector<Course>& _courses) : courses_list(_courses) {
        // 初始化邻接矩阵
        int numCourses = _courses.size();
        //先创建一维然后每一行扩充一维
        adjacencyMatrix.resize(numCourses, vector<bool>(numCourses, false));//设置一个numCourses*numCourses的二维数组，每个元素的值默认为false

        // 填充邻接矩阵      若j是i的先修课程，则[i][j] == true
        for (const Course& course : _courses) {
            for (int prereq : course.pre_class) {
                adjacencyMatrix[course.class_num][prereq] = true;
            }
        }
    }

    //打印邻接矩阵
    void printAdjacencyMatrix() {
        for (const vector<bool>& row : adjacencyMatrix) {
            for (bool isPrereq : row) {
                cout << isPrereq << " ";
            }
            cout << endl;
        }
    }



//    //最新版sort（无bug，可运行所有课程,可以显示排课结果用QString方式）
//QString sort(int maxHoursPerSemester, int maxCreditsPerSemester) {
//    QString result; // 用于存储排序结果的字符串
//    int numCourses = courses_list.size();  // 获取课程的总数量
//    vector<int> inDegree(numCourses, 0);  // 存储每个课程顶点的入度
//
//    // 记录每门课程的学期分配情况，-1表示未分配，若被分配，就存储对应的学期
//    assignment.resize(numCourses, -1);
//
//    int currentSemester = 1; // 当前学期
//    currentSemesterHours.resize(9, 0); // 当前学期的学时总数，包括 8 个学期
//    currentSemesterCredits.resize(9, 0); // 当前学期的学分总数，包括 8 个学期
//    int coursesAssigned = 0; // 已分配课程数量
//
//    //记录每一个课程的入度
//    for (int i = 0; i < numCourses; ++i) {
//        for (int k = 0; k < numCourses; k++) {
//            if (adjacencyMatrix[i][k]) {
//                inDegree[i]++; // 第i门课程的入度+1
//            }
//        }
//    }
//
//    while (coursesAssigned < numCourses) {
//        for (int i = 0; i < numCourses; ++i) {
//            if (inDegree[i] == 0 && assignment[i] == -1) {
//                // 课程的入度为0且未分配
//                bool canAssign = true;
//
//                // 检查是否存在未分配的先修课程，并且它们已经在之前的学期学完
//                for (int prereq : courses_list[i].pre_class) {
//                    if (assignment[prereq] == -1 || assignment[prereq] >= currentSemester) {
//                        canAssign = false;
//                        break;
//                    }
//                }
//
//                // 如果可以分配且满足学时和学分的约束条件
//                if (canAssign &&
//                    currentSemesterHours[currentSemester] + courses_list[i].hours <= maxHoursPerSemester &&
//                    currentSemesterCredits[currentSemester] + courses_list[i].score <= maxCreditsPerSemester) {
//
//                    assignment[i] = currentSemester; // 分配课程到当前学期
//                    //修改本学期信息
//                    currentSemesterHours[currentSemester] += courses_list[i].hours;
//                    currentSemesterCredits[currentSemester] += courses_list[i].score;
//                    coursesAssigned++;
//
//                    // 更新相关顶点的入度        第i个课程在本学期被选中
//                    for (int j = 0; j < numCourses; j++) {
//                        //若i是j的先修课程
//                        if (adjacencyMatrix[j][i]) {
//                            inDegree[j]--; // 第j门课程的入度-1
//                        }
//                    }
//                }
//            }
//        }
//
//        // 切换到下一个学期，但在递增之前检查是否达到最大学期
//        if (currentSemester >= 8) {
//            //cout << "已达到最大学期。" << endl;
//            break;
//        }
//        currentSemester++;
//
//        // 检查是否有课程无法分配
//        bool unassignedCoursesExist = false;
//        for (int i = 0; i < numCourses; ++i) {
//            if (assignment[i] == -1) {
//                unassignedCoursesExist = true;
//            }
//        }
//
//        //// 如果有课程无法分配，但已经是第8个学期，说明排课失败
//        //if (currentSemester > 8 && unassignedCoursesExist) {
//        //    cout << "排课失败，无法满足约束条件。" << endl;
//        //    return;
//        //}
//    }
//
//    // 输出学期分配结果
//    if (coursesAssigned < numCourses) {
//        result = "排课失败，无法满足约束条件。";
//    }
//    else {
//        result = "学期分配结果:\n";
//
//        for (int i = 0; i < 8; ++i) {
//            result += "学期 " + QString::number(i + 1) + " 课程：";
//            for (int j = 0; j < numCourses; ++j) {
//                if (assignment[j] == i + 1) {
//                    /*result += courses_list[j].name.c_str();
//                    result += " ";*/
//                    result += courses_list[j].name.c_str();
//                    result += "(" + QString::number(courses_list[j].class_num) + ")";
//                    result += " ";
//                }
//            }
//            result += "\n";
//        }
//    }
//
//    return result;
//}


   //最新版sort（无bug，可运行所有课程,不显示排课结果）
void sort(int maxHoursPerSemester, int maxCreditsPerSemester) {
    //QString result; // 用于存储排序结果的字符串
    max_hour_per = maxHoursPerSemester;
    max_score_per = maxCreditsPerSemester;

    int numCourses = courses_list.size();  // 获取课程的总数量
    vector<int> inDegree(numCourses, 0);  // 存储每个课程顶点的入度

    // 记录每门课程的学期分配情况，-1表示未分配，若被分配，就存储对应的学期
    assignment.resize(numCourses, -1);

    int currentSemester = 1; // 当前学期
    currentSemesterHours.resize(9, 0); // 当前学期的学时总数，包括 8 个学期
    currentSemesterCredits.resize(9, 0); // 当前学期的学分总数，包括 8 个学期
    int coursesAssigned = 0; // 已分配课程数量

    //记录每一个课程的入度
    for (int i = 0; i < numCourses; ++i) {
        for (int k = 0; k < numCourses; k++) {
            if (adjacencyMatrix[i][k]) {
                inDegree[i]++; // 第i门课程的入度+1
            }
        }
    }

    while (coursesAssigned < numCourses) {
        for (int i = 0; i < numCourses; ++i) {
            if (inDegree[i] == 0 && assignment[i] == -1) {
                // 课程的入度为0且未分配
                bool canAssign = true;

                // 检查是否存在未分配的先修课程，并且它们已经在之前的学期学完
                for (int prereq : courses_list[i].pre_class) {
                    if (assignment[prereq] == -1 || assignment[prereq] >= currentSemester) {
                        canAssign = false;
                        break;
                    }
                }

                // 如果可以分配且满足学时和学分的约束条件
                if (canAssign &&
                    currentSemesterHours[currentSemester] + courses_list[i].hours <= maxHoursPerSemester &&
                    currentSemesterCredits[currentSemester] + courses_list[i].score <= maxCreditsPerSemester) {

                    assignment[i] = currentSemester; // 分配课程到当前学期
                    //修改本学期信息
                    currentSemesterHours[currentSemester] += courses_list[i].hours;
                    currentSemesterCredits[currentSemester] += courses_list[i].score;
                    coursesAssigned++;

                    // 更新相关顶点的入度        第i个课程在本学期被选中
                    for (int j = 0; j < numCourses; j++) {
                        //若i是j的先修课程
                        if (adjacencyMatrix[j][i]) {
                            inDegree[j]--; // 第j门课程的入度-1
                        }
                    }
                }
            }
        }

        // 切换到下一个学期，但在递增之前检查是否达到最大学期
        if (currentSemester >= 8) {
            //cout << "已达到最大学期。" << endl;
            break;
        }
        currentSemester++;

        // 检查是否有课程无法分配
        bool unassignedCoursesExist = false;
        for (int i = 0; i < numCourses; ++i) {
            if (assignment[i] == -1) {
                unassignedCoursesExist = true;
            }
        }

        // 如果有课程无法分配，但已经是第8个学期，说明排课失败
        if (currentSemester > 8 && unassignedCoursesExist) {
            cout << "排课失败，无法满足约束条件。" << endl;
            return;
        }
    }
}


//// 允许用户手动调整课程的分配    会把不能调整的课程也调整到对应的学期中
QString adjust_term(int courseIndex, int newSemester) {
    QString result;

    // 暂存原始的课程分配情况
    vector<int> originalAssignment = assignment;
    vector<int> originalCurrentSemesterHours = currentSemesterHours;
    vector<int> originalCurrentSemesterCredits = currentSemesterCredits;

    // 取消原有分配
    if (assignment[courseIndex] != -1) {
        int originalSemester = assignment[courseIndex];
        currentSemesterHours[originalSemester] -= courses_list[courseIndex].hours;
        currentSemesterCredits[originalSemester] -= courses_list[courseIndex].score;
        assignment[courseIndex] = -1;
    }

    // 更新被调整课程的分配
    assignment[courseIndex] = newSemester;
    currentSemesterHours[newSemester] += courses_list[courseIndex].hours;
    currentSemesterCredits[newSemester] += courses_list[courseIndex].score;

    // 使用 runSchedulingAlgorithm 函数来检查制约条件
    if (runSchedulingAlgorithm(newSemester)) {
        result = "已调整课程分配。";
    }
    else {
        // 恢复原始的课程分配情况
        assignment = originalAssignment;
        currentSemesterHours = originalCurrentSemesterHours;
        currentSemesterCredits = originalCurrentSemesterCredits;
        assignment[courseIndex] = -1; // 不满足条件时将课程置为未分配
        result = "无法调整课程分配，不满足约束条件。";
    }

    return result;
}



bool runSchedulingAlgorithm(int startSemester) {
    int numCourses = courses_list.size();
    vector<int> inDegree(numCourses, 0);
    vector<int> unassignedCourses; // 保存未分配的课程

    for (int i = 0; i < numCourses; ++i) {
        for (int k = 0; k < numCourses; k++) {
            if (adjacencyMatrix[i][k]) {
                inDegree[i]++;
            }
        }

        if (assignment[i] == -1) {
            unassignedCourses.push_back(i); // 收集未分配的课程
        }
    }

    int currentSemester = startSemester;
    vector<int> currentSemesterHours(9, 0);
    vector<int> currentSemesterCredits(9, 0);
    int coursesAssigned = 0;

    while (!unassignedCourses.empty()) {
        vector<int> coursesToAssign; // 收集要在本学期分配的课程

        for (int i : unassignedCourses) {
            if (inDegree[i] == 0) {
                bool canAssign = true;

                for (int prereq : courses_list[i].pre_class) {
                    if (assignment[prereq] == -1 || assignment[prereq] >= currentSemester) {
                        canAssign = false;
                        break;
                    }
                }

                if (canAssign &&
                    currentSemesterHours[currentSemester] + courses_list[i].hours <= max_hour_per &&
                    currentSemesterCredits[currentSemester] + courses_list[i].score <= max_score_per) {

                    coursesToAssign.push_back(i); // 收集要在本学期分配的课程
                }
            }
        }

        // 将课程分配到本学期
        for (int i : coursesToAssign) {
            assignment[i] = currentSemester;
            currentSemesterHours[currentSemester] += courses_list[i].hours;
            currentSemesterCredits[currentSemester] += courses_list[i].score;
            coursesAssigned++;
            inDegree[i] = -1; // 标记已分配的课程

            // 更新相关顶点的入度
            for (int j = 0; j < numCourses; j++) {
                if (adjacencyMatrix[j][i]) {
                    inDegree[j]--;
                }
            }
        }

        if (currentSemester >= 8) {
            return false;
        }
        currentSemester++;

        // 重新收集未分配的课程
        unassignedCourses.clear();
        for (int i = 0; i < numCourses; ++i) {
            if (assignment[i] == -1 && inDegree[i] != -1) {
                unassignedCourses.push_back(i);
            }
        }

        if (currentSemester > 8 && !unassignedCourses.empty()) {
            return false;
        }
    }

    return true; // 成功排课
}





    QString show_result()
    {
        QString result; // 用于存储排序结果的字符串
        int numCourses = courses_list.size();  // 获取课程的总数量
        result += "排课结果\n";
        for (int i = 0; i < 8; ++i) {
            result += "学期 " + QString::number(i + 1) + " 课程：";
            for (int j = 0; j < numCourses; ++j) {
                if (assignment[j] == i + 1) {
                    /*result += courses_list[j].name.c_str();
                    result += " ";*/
                    result += courses_list[j].name.c_str();
                    result += "(" + QString::number(courses_list[j].class_num) + ")";
                    result += " ";
                }
            }
            result += "\n";
        }
        return result;
    }

};



////读取json文件并存储在courses结构体数组中
//void load_json(vector<Course>& courses)
//{
//    ifstream file("课程数据.json");  // 打开JSON文件
//    if (!file.is_open()) {
//        cerr << "无法打开JSON文件。" << endl;
//        return;
//    }
//
//    Value json_data;  // 从文件中读取JSON数据
//
//    file >> json_data;
//
//    // 解析JSON数据以提取课程信息
//    /*vector<Course> courses;*/
//    for (const auto& course_data : json_data["courses"]) {
//        string name = course_data["name"].asString();
//        int class_num = course_data["class_num"].asInt();
//        vector<int> pre_class;
//        for (const auto& pre_req : course_data["pre_class"]) {
//            pre_class.push_back(pre_req.asInt());
//        }
//        int score = course_data["score"].asInt();
//        int hours = course_data["hours"].asInt();
//        courses.emplace_back(name, class_num, pre_class, score, hours);
//    }
//}