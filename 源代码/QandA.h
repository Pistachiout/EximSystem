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
        string question;//����
        string answer;//��
        string score;//���� 
	virtual	void InitQandA(vector<QandA>& qa){};//��ʼ������� 
	
	int choice(vector<QandA>& qa);//ѡ���� 
	int fillIn(vector<QandA>& qa);//����� 
	virtual void shortAnswer(vector<QandA>& qa,string name){};//����� 
	virtual void programming(vector<QandA>& qa,string name){};//����� 
	virtual void Exam(vector<QandA>& qa,string name){};//����
};

