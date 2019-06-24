#include<iostream>
using namespace std;
int main() 
{
    int a,b,c,max;
    cin>>a>>b>>c;
    if (a>b) max=a; else max=b;
	if (c>max) max=c;
    cout<<"a="<<a<<",b="<<b<<",c="<<c<<endl<<"max="<<max;
    return 0;
} 
