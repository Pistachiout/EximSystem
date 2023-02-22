#include "student.h"
void InitStudent(vector<Student>&s)
{
    ifstream file1("../txt文件数据/StudentsNum.txt");//打开学号文件 
    ifstream file2("../txt文件数据/StudentsName.txt");//打开学生姓名文件 
    Student stu;
    string temp;
    while (getline(file1, stu.studentnum))
    {	
        getline(file2, stu.studentname);
        s.push_back(stu);
    }
    file1.close();//关闭文件 
    file2.close();//关闭文件 
}
string Register(vector<Student>&s, string num)//考生登录 
{
    int flag = 0;
    string name;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i].studentnum == num)
        {	name=s[i].studentname;
            cout << "登录成功" + s[i].studentname << endl;
            flag = 1;
        }    
    };
    if (flag == 0)
    	{	
        cout << "无此考生！" << endl;
        exit(0);
    	}
    return name;
}
