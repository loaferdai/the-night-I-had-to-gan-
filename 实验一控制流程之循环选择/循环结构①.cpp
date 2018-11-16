#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;
int main()
{
	float sum;
	for(int n=1;n<=100;n++)
	{sum=sum+1.0/n;}
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<sum;
} 
