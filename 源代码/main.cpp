#include "student.h"
#include "QandAC.h"
#include "QandAJ.h"
int main()
{
    string num;
    vector<Student>ALLSTUDENTS;
    
    InitStudent(ALLSTUDENTS);//考生信息初始化 
    
    cout << "//////////////考试系统////////////" << endl;
    cout << "请输入学号" << endl;
    cin >> num;
    string name=Register(ALLSTUDENTS, num);//用户登录 
    cout << "//////////////请选择面向对象考试课目////////////" << endl;
    cout << "//////////////1.C++////////////" << endl;
    cout << "//////////////2.java////////////" << endl;//选择考生科目 
    int subject;
    cin>>subject;
	vector<QandA> ALLQA;
	QandA* q;
	if(subject==1)//根据subject判断哪种考试 
	{	q=new QandAC(); 
		q->InitQandA(ALLQA);
		cout << "开始C++考试！每题十分，共十题，六十分以上及格。"<<endl<<"1-4题为选择题(请用ABCD大写字母回答)，5-8题为填空题，第九题为简答题，第十题为编程题" << endl;
	}
	else {
		q=new QandAJ(); 
		q->InitQandA(ALLQA);
		cout << "开始Java考试！每题十分，共十题，六十分以上及格。"<<endl<<"1-4题为选择题(请用ABCD大写字母回答)，5-8题为填空题，第九题为简答题，第十题为编程题" << endl;
	}
    q->Exam(ALLQA,name);//q实例化后调用Exam进行考试 
}
