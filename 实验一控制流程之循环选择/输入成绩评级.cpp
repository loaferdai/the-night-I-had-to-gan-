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
	for(int i = 0;i <= 2;i++)
    {
    cout<<"第"<<i+1<<"个等级为:";
	if (grade[i]>=90)  cout<<"A";
    else if (grade[i]<90 && grade[i]>=80) cout<<"B";
    else if (grade[i]<80 && grade[i]>=70) cout<<"C";
    else if (grade[i]<70 && grade[i]>=60) cout<<"D";
    else cout<<"E";
    cout<<endl;
	}
    return 0;
} 
