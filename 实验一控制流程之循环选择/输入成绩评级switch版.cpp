#include<iostream>
using namespace std;
int main() 
{
    int grade[3];
    cout<<"�����һ���ɼ�:";
	cin>>grade[0];
	cout<<"����ڶ����ɼ�:"; 
	cin>>grade[1];
	cout<<"����������ɼ�:"; 
	cin>>grade[2];
    for (int i=1;i<4;i++)
    {
    cout<<"��"<<i<<"���ȼ�Ϊ:";
	switch(grade[i-1]/10)
    {
    case 10:cout<<"A";break;
	case 9:cout<<"A";break;
    case 8:cout<<"B";break;
    case 7:cout<<"C";break;
    case 6:cout<<"D";break;
    default:cout<<"E";break;
    }
    cout<<endl;
	}
	return 0;
} 
