#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class student{
	string name;
	int No;
	int score1;
	int score2;
	int score3;
	public:
		double average;
		student();
		~student();
		student(const student &p);
		student(int no, int sc1, int sc2, int sc3, string null_name);
		void show();
};
void student::show()
{
	cout << No << "\t" << name.c_str() 
		<< "\t" << score1 << "\t" 
		<< score2 << "\t" << score3 
		<< "\t" << setiosflags(ios::fixed) 
		<< setprecision(2) << average << endl;
}
student::student(int no, int sc1, int sc2, int sc3, string null_name)
{
	No = no;
	score1 = sc1;
	score2 = sc2;
	score3 = sc3;
	average = (sc1 + sc2 + sc3) / 3.0;
	name = null_name;
}
student::student(const student &p)
{

}
student::student()
{
	cout << "Used Constructor" << endl;
}
student::~student()
{
	cout << "Used Destructor" << endl;
}
void sort(student *temp)
{
	int i = 0; int k; student st;
	for (i; i <= 3; i++)
	{	int k = i;
		for (int j = i; j++ <= 4;)
			{
			if (temp[j].average > temp[k].average) k = j;
			}
		if (k != i)
		{
			st = temp[k];
			temp[k] = temp[i];
			temp[i] = st;
		}
	}
	for (i = 0; i <= 4; i++)
	{
		temp[i].show();
	}
}
int main()
{
	void sort(student temp[]);
	student stu[5] = {
	student(101,93,89,87,"Zhou"),
	student(102,85,80,78,"Yang"),
	student(103,77,70,83,"Chen"),
	student(104,70,67,60,"Qian"),
	student(105,72,70,69,"Li") };
	sort(stu);
	system("pause");
}