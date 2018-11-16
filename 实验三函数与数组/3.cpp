#include <iostream>
#define number 10
using namespace std;
int main() {
	int data[number];
	cout << "输入数组10个数值元素：" << endl;
	int n = 0;
	while (n < 10) 
	{
		cin >> data[n];
		n++;
	}
	cout << "顺序：" << endl;
	for (int i = 0; i <= n - 1; i++) 
	
	{
		cout << data[i] << ' ';
	}
	cout << endl << "倒序：" << endl;
	for (int i = n - 1; i >= 0; i--) 
	{
		cout << data[i] << ' ';
	}
	cout << endl;
	system("pause");
	return 0;
}