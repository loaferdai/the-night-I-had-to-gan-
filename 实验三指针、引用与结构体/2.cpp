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
	printf("�������ַ���a:");
	cin>>a;
	n = length(a);
	printf("�ַ�������Ϊ��%d", n);
	system("pause");
}