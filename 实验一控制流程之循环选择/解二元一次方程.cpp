#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,x1,x2;
    cout<<"�󷽳�ax^2+bx+c=0�Ľ�\n";
	cout<<"����a=";cin>>a;cout<<"����b=";cin>>b;cout<<"����c=";cin>>c;
	float ment;
	ment = b*b-4*a*c;
    if (ment >= 0)
	{
	   x1=(-b + sqrt(b*b-4*a*c))/2*a;
	   x2=(-b - sqrt(b*b-4*a*c))/2*a;
	   {
	   if (x1==x2) cout<<"������һ����:"<<"x="<<x1;
	   else cout<<"������������:    "<<"x="<<x1<<"   ��   x="<<x2;
   	   }
   }
    else
	   cout<<"�˷����޽�";
    cout<<endl;
	system("pause");
} 
