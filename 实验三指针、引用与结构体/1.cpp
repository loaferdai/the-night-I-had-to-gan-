#include<iostream>
using namespace std;
int main() {
	int	*p, list[10];
	cout << "Input ten integer:";
	for (int i = 0; i <= 9; i++)
		cin >> list[i];
	p = &list[9];
	for (int i = 0; i <= 9; i++)
		cout << *(p - i) << " ";
	system("pause");
}