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
	for(int i = 0;i <= 2;i++)
    {
    cout<<"��"<<i+1<<"���ȼ�Ϊ:";
	if (grade[i]>=90)  cout<<"A";
    else if (grade[i]<90 && grade[i]>=80) cout<<"B";
    else if (grade[i]<80 && grade[i]>=70) cout<<"C";
    else if (grade[i]<70 && grade[i]>=60) cout<<"D";
    else cout<<"E";
    cout<<endl;
	}
    return 0;
} 
