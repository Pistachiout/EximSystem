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
void shortAnswer(vector<QandA>& qa,string name);//�����
void programming(vector<QandA>& qa,string name);//����� 
void InitQandA(vector<QandA>& qa);//��ʼ�������
void Exam(vector<QandA>& qa,string name);//����
};

