#include "student.h"
void InitStudent(vector<Student>&s)
{
    ifstream file1("../txt�ļ�����/StudentsNum.txt");//��ѧ���ļ� 
    ifstream file2("../txt�ļ�����/StudentsName.txt");//��ѧ�������ļ� 
    Student stu;
    string temp;
    while (getline(file1, stu.studentnum))
    {	
        getline(file2, stu.studentname);
        s.push_back(stu);
    }
    file1.close();//�ر��ļ� 
    file2.close();//�ر��ļ� 
}
string Register(vector<Student>&s, string num)//������¼ 
{
    int flag = 0;
    string name;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i].studentnum == num)
        {	name=s[i].studentname;
            cout << "��¼�ɹ�" + s[i].studentname << endl;
            flag = 1;
        }    
    };
    if (flag == 0)
    	{	
        cout << "�޴˿�����" << endl;
        exit(0);
    	}
    return name;
}
