#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
   int s,m,b,num;
   for(b=0;b<=20;b++)
    {
     for(m=0;m<=100-b;m++)
     {
      s=100-b-m;
	   if (3*b+2*m+0.5*s==100)
       {
	   num++;
	   cout<<"����"<<num<<":"; 
	   cout<<"����"<<b<<"ֻ";
	   cout<<"����"<<m<<"ֻ";
	   cout<<"С��"<<s<<"ֻ\n";
  	   }
	 }
     }
} 
