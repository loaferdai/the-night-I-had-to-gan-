#include<iostream>
using namespace std;
int main() 
{
    int grade[3];
    cout<<"输入第一个成绩:";
	cin>>grade[0];
	cout<<"输入第二个成绩:"; 
	cin>>grade[1];
	cout<<"输入第三个成绩:"; 
	cin>>grade[2];
    for (int i=1;i<4;i++)
    {
    cout<<"第"<<i<<"个等级为:";
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
