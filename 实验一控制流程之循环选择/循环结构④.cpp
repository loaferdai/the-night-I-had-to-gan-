#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
   int sum,a,b,c;
   for(a=1;b<=10;a++)
    {
     for(b=1;b<=a;b++)
     {
       c=c*b;
     }
     sum=sum+c;
     c=1;
    }
    cout<<"sum="<<sum;
} 
