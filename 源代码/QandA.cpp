#include "QandA.h"
#include <windows.h> 
#include <fstream>
void InitQandA(vector<QandA>& qaa)
{
    ifstream file1("../txt文件数据/Question.txt");//打开文件 
    ifstream file2("../txt文件数据/Answer.txt");
    QandA qa;
    string temp;
    while (getline(file1, qa.question))
    {
    	getline(file2, qa.answer);
        qaa.push_back(qa);
    }
    file1.close();
    file2.close();
}
int QandA::choice(vector<QandA>& qa)//选择题处理 
{	int sum=0;	
	for (int i = 0; i <4; i++)
    {	
		int j=i*5;
    	for(int t=0;t<5;t++)
        cout << qa[j+t].question << endl;
        string ans;
        cin >> ans;
        if (qa[i].answer == ans)
        {
            cout << "答对了！加10分" << endl;
            sum += 10;
        }
        else
        {
            cout << "答错了！不得分" << endl;
        }
    }
	return sum;
}
int QandA::fillIn(vector<QandA>& qa)//填空题处理 
{	int sum=0;
	for (int i = 4,j=20; i <8; i++,j++)
    {	string ans;
        cout << qa[j].question << endl;
        cin >> ans;
        if (qa[i].answer == ans)
        {
            cout << "答对了！加10分" << endl;
            sum += 10;
        }
        else
        {
            cout << "答错了！不得分" << endl;
        }
    }
	return sum;
}

