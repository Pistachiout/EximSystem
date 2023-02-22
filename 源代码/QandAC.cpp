#include "QandAC.h"
#include <windows.h> 
#include <fstream>
void QandAC::InitQandA(vector<QandA>& qaa)
{
    ifstream file1("../txt文件数据/QuestionC.txt");//打开c++考试题目
    ifstream file2("../txt文件数据/AnswerC.txt");//打开c++考试答案获取 
    QandA qa;
    string temp;
    while (getline(file1, qa.question))//读取文件 
    {
    	getline(file2, qa.answer);
        qaa.push_back(qa);
    }
    file1.close();//关闭文件 
    file2.close();//关闭文件 
}
void QandAC::Exam(vector<QandA>& qa,string name)
{
    
    int sum = 0;//选填总分 
    sum+=this->choice(qa);//选择题处理 
    sum+=this->fillIn(qa);//判断题处理 
    this->shortAnswer(qa,name);//简答题处理 
    this->programming(qa,name); //编程题处理 
    cout << "C++考试结束！选择与填空题得分为";
    SYSTEMTIME sys; 
    GetLocalTime(&sys);// GetLocalTime获取当前时间 
    ofstream in;
	in.open("../txt文件数据/Score.txt",ios::app); ////ios::app表示输入文件末尾 
	in << sys.wYear <<"/"<< sys.wMonth << "/" << sys.wDay << "      " << sys.wHour << ":" << sys.wMinute<<"\t";
	//文件中输入当前时间年月日小时分钟 
	in<<name<<"的C++选填成绩是"<<sum<<"\n";
	in.close();//关闭文件
	cout<<sum<<endl;
	cout<<"选择与填空题成绩已存入../txt文件数据/Score.txt"<<endl;
	cout<<"简答题答案存入../txt文件数据/shortAnswerC.txt"<<endl;
	cout<<"编程题答案存入../txt文件数据/programmingC.txt" <<endl;
}
void QandAC::shortAnswer(vector<QandA>& qa,string name)
{		string ans;
        cout << qa[24].question << endl;
        cin >> ans;
         SYSTEMTIME sys; 
    GetLocalTime(&sys); 
    ofstream in;
	in.open("../txt文件数据/shortAnswerC.txt",ios::app); //ios::app表示输入末尾 
	in << sys.wYear <<"/"<< sys.wMonth << "/" << sys.wDay << "      " << sys.wHour << ":" << sys.wMinute<<"\t";
	//文件中输入当前时间年月日小时分钟 
	in<<name<<"的C++简答题答案是"<<ans<<"\n"<<endl;
	in.close();//关闭文件
}
void QandAC::programming(vector<QandA>& qa,string name)
{		string ans;
        cout << qa[25].question << endl;
        SYSTEMTIME sys; 
    	GetLocalTime(&sys); 
        ofstream in;
        in.open("../txt文件数据/programmingC.txt",ios::app); //ios::app表示输入末尾 
        in << sys.wYear <<"/"<< sys.wMonth << "/" << sys.wDay << "      " << sys.wHour << ":" << sys.wMinute<<"\t";
        //文件中输入当前时间年月日小时分钟 
        in<<name<<"的C++编程题答案是:"<<endl;
		while(1)
        {cin >> ans;
        if(ans=="end")//输入‘end’结束编程 
        	break;
        if(ans=="##e"){//输入‘##e’表示换行 
			in<<endl;
			continue;
			}
		in<<ans<<" ";
		}
		in<<endl;
		in.close();//关闭文件
}
