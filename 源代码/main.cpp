#include "student.h"
#include "QandAC.h"
#include "QandAJ.h"
int main()
{
    string num;
    vector<Student>ALLSTUDENTS;
    
    InitStudent(ALLSTUDENTS);//������Ϣ��ʼ�� 
    
    cout << "//////////////����ϵͳ////////////" << endl;
    cout << "������ѧ��" << endl;
    cin >> num;
    string name=Register(ALLSTUDENTS, num);//�û���¼ 
    cout << "//////////////��ѡ����������Կ�Ŀ////////////" << endl;
    cout << "//////////////1.C++////////////" << endl;
    cout << "//////////////2.java////////////" << endl;//ѡ������Ŀ 
    int subject;
    cin>>subject;
	vector<QandA> ALLQA;
	QandA* q;
	if(subject==1)//����subject�ж����ֿ��� 
	{	q=new QandAC(); 
		q->InitQandA(ALLQA);
		cout << "��ʼC++���ԣ�ÿ��ʮ�֣���ʮ�⣬��ʮ�����ϼ���"<<endl<<"1-4��Ϊѡ����(����ABCD��д��ĸ�ش�)��5-8��Ϊ����⣬�ھ���Ϊ����⣬��ʮ��Ϊ�����" << endl;
	}
	else {
		q=new QandAJ(); 
		q->InitQandA(ALLQA);
		cout << "��ʼJava���ԣ�ÿ��ʮ�֣���ʮ�⣬��ʮ�����ϼ���"<<endl<<"1-4��Ϊѡ����(����ABCD��д��ĸ�ش�)��5-8��Ϊ����⣬�ھ���Ϊ����⣬��ʮ��Ϊ�����" << endl;
	}
    q->Exam(ALLQA,name);//qʵ���������Exam���п��� 
}
