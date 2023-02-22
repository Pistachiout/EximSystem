#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <stdlib.h>
using namespace::std;
class QandA
{
    public:
        string question;//问题
        string answer;//答案
        string score;//分数 
	virtual	void InitQandA(vector<QandA>& qa){};//初始化考题答案 
	
	int choice(vector<QandA>& qa);//选择题 
	int fillIn(vector<QandA>& qa);//填空题 
	virtual void shortAnswer(vector<QandA>& qa,string name){};//简答题 
	virtual void programming(vector<QandA>& qa,string name){};//编程题 
	virtual void Exam(vector<QandA>& qa,string name){};//考试
};

