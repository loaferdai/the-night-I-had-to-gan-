#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
struct student
{
	int No;
	string name;
	int score1; int score2; int score3;
	double average=(score1+score2+score3)/3.0;
};
int main()
{
	student st[5];
	st[0] = { 101,"Zhou",93,89,87 };
	st[1] = { 102,"Yang",85,80,78 };
	st[2] = { 103,"Chen",77,70,83 };
	st[3] = { 104,"Qian",70,67,60 };
	st[4] = { 105,"Li",72,70,69 };
	cout << "No\tname\tscore1\tscore2\tscore3\taverage"<<endl;
	for (int x = 0; x < 5;x++)
		cout << st[x].No<< "\t" << st[x].name.c_str() 
		<< "\t" << st[x].score1 
		<< "\t" << st[x].score2 
		<< "\t" << st[x].score3 
		<< "\t" << setiosflags(ios::fixed) << setprecision(2) << st[x].average << endl;
	system("pause");
}