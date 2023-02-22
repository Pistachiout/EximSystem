#pragma once
#include <string>
#include "QandA.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <stdlib.h>
using namespace::std;
class QandAJ:public QandA
{
public:
void shortAnswer(vector<QandA>& qa,string name);//简答题
void programming(vector<QandA>& qa,string name);//编程题 
void InitQandA(vector<QandA>& qa);//初始化考题答案
void Exam(vector<QandA>& qa,string name);//考试
};

