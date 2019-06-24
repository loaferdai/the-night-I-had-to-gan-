#include<iostream>
using namespace std;
int main ()
{
 const float pi=3.14159;
 int high;
 float radius,bottomarea,superficialarea,volume,perimeter;
 cout<<"输入圆的半径：";cin>>radius;cout<<"输入圆柱的高：";cin>>high;
 bottomarea=pi*radius*radius;perimeter=2*pi*radius;
 superficialarea=perimeter*high;volume=bottomarea*high;
 cout<<"圆周长为："<<perimeter<<endl;
 cout<<"圆面积为："<<bottomarea<<endl;
 cout<<"圆柱表面积为："<<superficialarea<<endl;
 cout<<"圆体积为："<<volume<<endl;
 system("pause");
 return 0;
}
