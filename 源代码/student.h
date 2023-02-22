#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <stdlib.h>
using namespace::std;
class Student
{
    public:
        string studentnum;//学号
        string studentname;//学生姓名
};
void InitStudent(vector<Student>&s);//初始化考生
string Register(vector<Student>&s, string num);//登录

