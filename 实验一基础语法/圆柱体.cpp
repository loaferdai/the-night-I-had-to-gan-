#include<iostream>
using namespace std;
int main ()
{
 const float pi=3.14159;
 int high;
 float radius,bottomarea,superficialarea,volume,perimeter;
 cout<<"����Բ�İ뾶��";cin>>radius;cout<<"����Բ���ĸߣ�";cin>>high;
 bottomarea=pi*radius*radius;perimeter=2*pi*radius;
 superficialarea=perimeter*high;volume=bottomarea*high;
 cout<<"Բ�ܳ�Ϊ��"<<perimeter<<endl;
 cout<<"Բ���Ϊ��"<<bottomarea<<endl;
 cout<<"Բ�������Ϊ��"<<superficialarea<<endl;
 cout<<"Բ���Ϊ��"<<volume<<endl;
 system("pause");
 return 0;
}
