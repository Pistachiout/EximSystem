#include "QandAC.h"
#include <windows.h> 
#include <fstream>
void QandAC::InitQandA(vector<QandA>& qaa)
{
    ifstream file1("../txt�ļ�����/QuestionC.txt");//��c++������Ŀ
    ifstream file2("../txt�ļ�����/AnswerC.txt");//��c++���Դ𰸻�ȡ 
    QandA qa;
    string temp;
    while (getline(file1, qa.question))//��ȡ�ļ� 
    {
    	getline(file2, qa.answer);
        qaa.push_back(qa);
    }
    file1.close();//�ر��ļ� 
    file2.close();//�ر��ļ� 
}
void QandAC::Exam(vector<QandA>& qa,string name)
{
    
    int sum = 0;//ѡ���ܷ� 
    sum+=this->choice(qa);//ѡ���⴦�� 
    sum+=this->fillIn(qa);//�ж��⴦�� 
    this->shortAnswer(qa,name);//����⴦�� 
    this->programming(qa,name); //����⴦�� 
    cout << "C++���Խ�����ѡ���������÷�Ϊ";
    SYSTEMTIME sys; 
    GetLocalTime(&sys);// GetLocalTime��ȡ��ǰʱ�� 
    ofstream in;
	in.open("../txt�ļ�����/Score.txt",ios::app); ////ios::app��ʾ�����ļ�ĩβ 
	in << sys.wYear <<"/"<< sys.wMonth << "/" << sys.wDay << "      " << sys.wHour << ":" << sys.wMinute<<"\t";
	//�ļ������뵱ǰʱ��������Сʱ���� 
	in<<name<<"��C++ѡ��ɼ���"<<sum<<"\n";
	in.close();//�ر��ļ�
	cout<<sum<<endl;
	cout<<"ѡ���������ɼ��Ѵ���../txt�ļ�����/Score.txt"<<endl;
	cout<<"�����𰸴���../txt�ļ�����/shortAnswerC.txt"<<endl;
	cout<<"�����𰸴���../txt�ļ�����/programmingC.txt" <<endl;
}
void QandAC::shortAnswer(vector<QandA>& qa,string name)
{		string ans;
        cout << qa[24].question << endl;
        cin >> ans;
         SYSTEMTIME sys; 
    GetLocalTime(&sys); 
    ofstream in;
	in.open("../txt�ļ�����/shortAnswerC.txt",ios::app); //ios::app��ʾ����ĩβ 
	in << sys.wYear <<"/"<< sys.wMonth << "/" << sys.wDay << "      " << sys.wHour << ":" << sys.wMinute<<"\t";
	//�ļ������뵱ǰʱ��������Сʱ���� 
	in<<name<<"��C++��������"<<ans<<"\n"<<endl;
	in.close();//�ر��ļ�
}
void QandAC::programming(vector<QandA>& qa,string name)
{		string ans;
        cout << qa[25].question << endl;
        SYSTEMTIME sys; 
    	GetLocalTime(&sys); 
        ofstream in;
        in.open("../txt�ļ�����/programmingC.txt",ios::app); //ios::app��ʾ����ĩβ 
        in << sys.wYear <<"/"<< sys.wMonth << "/" << sys.wDay << "      " << sys.wHour << ":" << sys.wMinute<<"\t";
        //�ļ������뵱ǰʱ��������Сʱ���� 
        in<<name<<"��C++��������:"<<endl;
		while(1)
        {cin >> ans;
        if(ans=="end")//���롮end��������� 
        	break;
        if(ans=="##e"){//���롮##e����ʾ���� 
			in<<endl;
			continue;
			}
		in<<ans<<" ";
		}
		in<<endl;
		in.close();//�ر��ļ�
}
