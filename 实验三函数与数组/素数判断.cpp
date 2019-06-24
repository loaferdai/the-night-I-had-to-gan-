#include<iostream>
using namespace std;
#include<cmath>
bool judge(int temp) {
	int k = sqrt(temp);
	for (int i = 2; i <= k; i++) {
		if (temp%i == 0) 
		{
			return 0;
			break;
		}
	}
	return 1;	
}
int main()
{
	bool judge(int temp);
	int n;
	cout << "输入数字：";cin >> n;
	judge(n) ? (cout << n << "是素数") : (cout << n << "不是素数"); cout << endl;
	system("pause");
	return 0;
}