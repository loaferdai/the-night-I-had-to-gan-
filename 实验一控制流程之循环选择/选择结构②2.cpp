#include<iostream>
using namespace std;
int main() 
{
    int grade[3];cin>>grade[1]>>grade[2]>>grade[3];cout<<type(grade[3]);
    for (int i=1;i<4;i++)
    {
	switch(grade[i]/10)
    {
    case 10:cout<<"A";break;
	case 9:cout<<"A";break;
    case 8:cout<<"B";break;
    case 7:cout<<"C";break;
    case 6:cout<<"D";break;
    default:cout<<"E";break;
    }
	}
	return 0;
} 
