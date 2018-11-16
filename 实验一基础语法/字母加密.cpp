#include "stdafx.h"
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
char tzk(string x)
{
 const char *y=x.c_str();
 return (*y + 4) ;
}
int main ()
{
 int i,ma;
 i=0;
 string name;
 cin>>name;
 ma = name.length();
 while (i<ma)
 {
 cout<<tzk(name.substr(i,1));
 i++;
 }
 system("pause");
 return 0;
}