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
	cout << "�������֣�";cin >> n;
	judge(n) ? (cout << n << "������") : (cout << n << "��������"); cout << endl;
	system("pause");
	return 0;
}