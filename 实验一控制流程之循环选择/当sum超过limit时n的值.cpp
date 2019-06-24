#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;
int main()
{
	//float sum;
	//for(float n = 0.0;sum<=10.0;n++)
	//{
	//	sum = sum+1.0/n;
	//	cout<<sum<<endl;
	//}
	//cout<<setiosflags(ios::fixed)<<setprecision(2)<<sum;
	float sum = 0.0;
	float limit = 10;
	cout<<"---------"<<endl;
	for (float n = 1;;n++)
	{
		cout<<"---------"<<endl;
		sum += 1.0/n;
		cout<<sum<<endl;
		if (sum > limit)  
		{
			cout<<"nµÄÖµÎª:"<<n;
			break;
		}
	};
} 
