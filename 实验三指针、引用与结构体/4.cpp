#include<iostream>
using namespace std;
struct date
{
	int year;
	int month;
	int day;
};
int main()
{
	date date1;
	cout << "Input year,month,day:";
	cin >> date1.year >> date1.month >> date1.day;
	int pos = 0;
	int month[12]; month[0] = 31; month[2] = 31; month[3] = 30; month[4] = 31; month[5] = 30; month[6] = 31; month[7] = 31; month[8] = 30; month[9] = 31; month[10] = 30; month[11] = 31;
	((date1.year % 4 == 0 && date1.year % 100 != 0) or (date1.year % 400 == 0)) ? (month[1] = 29) : (month[1] = 28);
	for (int i = 0; i++ < date1.month - 1;)
		pos += month[i];
	pos += date1.day;
	cout << "该日是今年中的第" << pos << "天"<<endl;
	system("pause");
}