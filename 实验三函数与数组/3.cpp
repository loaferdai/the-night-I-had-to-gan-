#include <iostream>
#define number 10
using namespace std;
int main() {
	int data[number];
	cout << "��������10����ֵԪ�أ�" << endl;
	int n = 0;
	while (n < 10) 
	{
		cin >> data[n];
		n++;
	}
	cout << "˳��" << endl;
	for (int i = 0; i <= n - 1; i++) 
	
	{
		cout << data[i] << ' ';
	}
	cout << endl << "����" << endl;
	for (int i = n - 1; i >= 0; i--) 
	{
		cout << data[i] << ' ';
	}
	cout << endl;
	system("pause");
	return 0;
}