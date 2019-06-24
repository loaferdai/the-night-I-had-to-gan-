#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,x1,x2;
    cout<<"求方程ax^2+bx+c=0的解\n";
	cout<<"输入a=";cin>>a;cout<<"输入b=";cin>>b;cout<<"输入c=";cin>>c;
	float ment;
	ment = b*b-4*a*c;
    if (ment >= 0)
	{
	   x1=(-b + sqrt(b*b-4*a*c))/2*a;
	   x2=(-b - sqrt(b*b-4*a*c))/2*a;
	   {
	   if (x1==x2) cout<<"方程有一个解:"<<"x="<<x1;
	   else cout<<"方程有两个解:    "<<"x="<<x1<<"   或   x="<<x2;
   	   }
   }
    else
	   cout<<"此方程无解";
    cout<<endl;
	system("pause");
} 
