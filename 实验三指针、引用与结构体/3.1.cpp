#include<iostream>;
using namespace std;
int swap(int *a, int *b)
{
	int c;
	c = *a; *a = *b; *b = c;
	return 0;
}
int main()
{
	int swap(int *a, int *b);
	int a, b; cout << "Input a,b:";
	cin >> a >> b;
	swap(&a,&b);
	cout << a <<" "<< b;
	system("pause");
}