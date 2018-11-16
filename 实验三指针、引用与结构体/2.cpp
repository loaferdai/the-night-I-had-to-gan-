#include<iostream>
using namespace std;
int length(char *a)
{
	int n = 0;
	while (*a != '\0')
	{
		n++;
		a++;
	}
	return n;
}
void main()
{
	char a[100];
	int n;
	printf("请输入字符串a:");
	cin>>a;
	n = length(a);
	printf("字符串长度为：%d", n);
	system("pause");
}