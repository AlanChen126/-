#include <iostream>
#include<stdlib.h>
#include <vector>
#include <stack>
#include <iostream>
#include <fstream>
#include <QString>
#include <QFile>
#include <QTextStream>


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
    //int coursesAssigned = 0; // 已分配课程数量

    vector<vector<int>> historyAssignments; // 用于保存历史课表分配
    vector<int> currentAssignment; // 保存的课表分配

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


//二次调整课程函数（有问题）
QString adjust_term(int courseIndex, int newSemester) {
    QString result;
    int coursesAssigned;

    // 暂存原始的课程分配情况
    vector<int> originalAssignment = assignment;

    // 重新运行排序算法，以尝试排课
    bool adopt = resort(courseIndex,newSemester);

    // 检查是否有课程未被安排
    if (!adopt) {
        result = "无法排课，有课程无法满足约束条件。";
        // 恢复原始的课程分配情况
        assignment = originalAssignment;
    }
    else {
        // 如果所有课程都被安排成功，记录当前的排课状态
        result = "排课成功，已记录当前排课状态。";
    }

    return result;
}

//在下面文字框中显示排课结果
    QString show_result()
    {
        QString result_final; // 用于存储排序结果的字符串
        int numCourses = courses_list.size();  // 获取课程的总数量
        result_final += "排课结果\n";
        for (int i = 0; i < 8; ++i) {
            result_final += "学期 " + QString::number(i + 1) + " 课程：";
            for (int j = 0; j < numCourses; ++j) {
                if (assignment[j] == i + 1) {
                    result_final += courses_list[j].name.c_str();
                    result_final += "(" + QString::number(courses_list[j].class_num) + ")";
                    result_final += " ";
                }
            }
            result_final += "\n";
        }
        return result_final;
    }

    //二次调整课程函数（有问题）
    bool resort(int courseIndex, int newSemester) {
        int numCourses = courses_list.size();  // 获取课程的总数量
        vector<int> inDegree(numCourses, 0);  // 存储每个课程顶点的入度

        int currentSemester = 1; // 当前学期
        int coursesAssigned = 0; // 已分配课程数量

        // 初始化每门课程的入度
        for (int i = 0; i < numCourses; ++i) {
            for (int k = 0; k < numCourses; k++) {
                if (adjacencyMatrix[i][k]) {
                    inDegree[i]++; // 第i门课程的入度+1
                }
            }
        }

        // 创建一个新的分配状态
        vector<int> newAssignment;
        newAssignment.resize(numCourses, -1);

        // 先将选中课程安排到新学期
        newAssignment[courseIndex] = newSemester;
        coursesAssigned++;
        //把该课程相关的后续课程依次往后推对应的一个学期，向后平移
        int pre_class_num = courseIndex;
        for (int j = newSemester + 1; j <= 8; j++) {
            //应该用while写第二层循环
            for (int i = 0; i < numCourses; i++) {
                for (int prereq : courses_list[i].pre_class) {
                    //如果该课程的先修课是被调整的课程，就把该课程向后平移一个学期
                    if (prereq == pre_class_num) {
                        newAssignment[i] = j;
                        pre_class_num = i;
                        coursesAssigned++;
                        break;
                    }

                }
            }
        }

        bool canAssign = false;

        while (coursesAssigned < numCourses) {
            for (int i = 0; i < numCourses; i++) {
                if ((newAssignment[i] == -1) && (inDegree[i] == 0)) {
                    // 课程未分配
                    canAssign = true;

                    // 检查是否存在未分配的先修课程，并且它们已经在之前的学期学完
                    for (int prereq : courses_list[i].pre_class) {
                        if (newAssignment[prereq] == -1 || newAssignment[prereq] >= currentSemester) {
                            canAssign = false;
                            break;
                        }
                    }

                    if (adjacencyMatrix[i][courseIndex] && currentSemester == newSemester) {
                        canAssign = false;
                    }

                    // 如果可以分配且满足学时和学分的约束条件
                    if (canAssign &&
                        currentSemesterHours[currentSemester] + courses_list[i].hours <= max_hour_per &&
                        currentSemesterCredits[currentSemester] + courses_list[i].score <= max_score_per) {

                        newAssignment[i] = currentSemester; // 分配课程到当前学期
                        // 修改本学期信息
                        currentSemesterHours[currentSemester] += courses_list[i].hours;
                        currentSemesterCredits[currentSemester] += courses_list[i].score;
                        coursesAssigned++;

                        // 更新相关顶点的入度
                        for (int j = 0; j < numCourses; j++) {
                            if (adjacencyMatrix[j][i]) {
                                inDegree[j]--; // 第j门课程的入度-1
                            }
                        }
                    }
                }
            }

            currentSemester++;
            // 切换到下一个学期，但在递增之前检查是否达到最大学期
            if (currentSemester >= 8) {
                //cout << "已达到最大学期。" << endl;
                break;
            }

        }


        // 检查新的分配状态是否满足要求
        for (int i = 0; i < numCourses; ++i) {
            if (newAssignment[i] == -1) {
                // 有课程无法分配
                return false;
            }
        }

        // 如果新的分配状态满足要求，更新原始分配状态
        assignment = newAssignment;
        return true;
    }

    //新版本
    // 新增保存当前课表到历史记录中的函数
    QString saveCurrentAssignment() {
        QString result;
        currentAssignment = assignment;
        historyAssignments.push_back(currentAssignment);
        result += "当前课表保存成功";
        return result;
    }

    //将结果保存在txt文件中
    QString save_txt()
    {
        QString result;
        if (saveToFile("class_table.txt", show_result())) {
            result += "当前课表成功保存在class_table.txt中";
        }
        else {
            result += "txt文件保存失败";
        }
        return result;
    }


    // 保存内容到文件
    bool saveToFile(const QString& filename, const QString& content) {
        QFile file(filename);  // 创建一个QFile对象，关联到指定的文件名(filename)

        if (!file.exists()) {
            // 如果文件不存在，创建一个新文件
            if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {//尝试以“只写”和“文本”模式打开文件
                QTextStream stream(&file);  // 创建一个QTextStream对象并与文件关联,来实现读取和写入文件
                stream << content;  // 将传入的文本内容(content)写入到文件中
                file.close();  // 关闭文件
                return true;  // 返回true表示保存成功
            }
            else {
                return false;  // 返回false表示保存失败
            }
        }

        if (file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)) {//append:写入的内容将被追加到文件末尾而不是覆盖原有内容。如果文件不存在，将创建一个新文件。
            // 如果文件存在，以追加模式打开文件
            QTextStream stream(&file);  // 创建一个QTextStream对象并与文件关联
            stream << content;  // 将传入的文本内容(content)写入到文件中
            file.close();  // 关闭文件
            return true;  // 返回true表示保存成功
        }

        return false;  // 返回false表示保存失败
    }

    // 新增回退到上一次保存的课表状态的函数
    QString undo() {
        QString result;
        if (historyAssignments.size() > 1) {
            // 移除当前的课表分配
            historyAssignments.pop_back();

            // 恢复到上一个历史课表状态
            assignment = historyAssignments.back();
            result += "回退成功";

        }
        else {
            result += "回退成功，目前没有保存的课表可供再次回撤";
        }
        return result;
    }


    //判断只删除最后9行，保留该文件
    QString removeFile(const QString& filename) {
        // 打开文件
        QFile file(filename);
        QString result;
        if (file.open(QIODevice::ReadWrite | QIODevice::Text)) {
            // 创建 QTextStream 以便于读写文件
            QTextStream in(&file);

            // 读取文件内容并存储在 QStringList 中
            QStringList lines;
            while (!in.atEnd()) {//检查是否已经到达文件的末尾
                lines << in.readLine();//读取文件的每一行
            }

            // 如果文件行数少于9，不执行删除操作
            if (lines.size() < 9) {
                result += "行数不够无法删除";
                return result;
            }

            // 删除最后9行
            lines.erase(lines.end() - 9, lines.end());

            // 创建一个 QString 变量并将 lines 中的内容合并到其中
            QString fileContent = lines.join("\n");//把每一行合在一起，用\n分割

            // 清空文件内容
            file.resize(0);

            // 创建 QTextStream 以便于写入修改后的内容
            QTextStream out(&file); //使用 out 对象来进行文件的文本写入操作

            // 将合并后的内容写回文件
            out << fileContent;//将删除后9行的数据存入文件中

            // 关闭文件
            file.close();
            result += "txt内容回撤成功";
            return result;
        }
        result += "txt文件无法打开";
        return result;
    }

    // 根据课程信息来转化成二维数组提供给show_table来显示课表
    vector<vector<string>> createClassAssignments() {
        int numCourses = courses_list.size();
        vector<vector<string>> classAssignments(8, vector<string>());

        for (int i = 0; i < numCourses; ++i) {
            int semester = assignment[i] - 1; // 学期从 0 到 7
            string courseInfo = courses_list[i].name + " (" + to_string(courses_list[i].class_num) + ")";
            classAssignments[semester].push_back(courseInfo);//把对应学期的课程加入vector
        }

        //如果不满8*8(有空)就自动填补成" "
        for (int i = 0; i < classAssignments.size(); ++i) {
            while (classAssignments[i].size() < 8) {//如果该学期课程数<8，添加空课程来充满表格
                classAssignments[i].push_back(" ");
            }
        }

        return classAssignments;
    }



};


