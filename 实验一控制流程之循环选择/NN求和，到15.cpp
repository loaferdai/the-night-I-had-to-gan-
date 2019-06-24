#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
   int M,N=1;
   for(N;N<=15;)
   {if(N<10)
   	M=M+N*11;
   	else
   	M=M+N*101;
    N++;}
   cout<<"M="<<M<<",N="<<N-1;
} 
