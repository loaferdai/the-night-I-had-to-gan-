#include <iostream>
using namespace std;
int main()
{
	unsigned long  factorial(int);
	unsigned long  sum = 0;
	int n;
	cout << "���룺"; cin >> n;
	while (n >= 1)
	{
		sum += factorial(n);
		n--;
	}
	cout << sum << endl;
	system("pause");
	return 0;
}
unsigned long factorial(int i) //�ݹ���׳�
{
	if (i != 1)
		return i * factorial(i - 1); 
	else
		return 1;
}