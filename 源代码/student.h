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
        string studentnum;//ѧ��
        string studentname;//ѧ������
};
void InitStudent(vector<Student>&s);//��ʼ������
string Register(vector<Student>&s, string num);//��¼

