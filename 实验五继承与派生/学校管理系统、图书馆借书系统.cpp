#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class student {
	string name;
	int No;
public:
	student();
	~student();
	student(const student &p);
	student(int no, string null_name);
	void show();
};
student::student(int no, string null_name)
{
	No = no;
	name = null_name;
};
student::student(const student &p)
{
	cout << "Used Copy Constructor" << endl;
};
student::student()
{
	cout << "Used Constructor" << endl;
};
student::~student()
{
	cout << "Used Destructor" << endl;
};
void student::show()
{
	cout << "学生学号:" << No << endl;
	cout << "学生姓名:" << name.c_str() << endl;
}
class card :student
{
private:
	float balance;
public:
	card();
	~card();
	card(const card &p);
	card(int no, string null_name, float _balance);
	void cost_water(int fee);
	void cost_canteen(int fee);
	void cost_shop(int fee);
	void show();
};
void card::cost_water(int fee)
{
	balance -= fee;
}
void card::cost_canteen(int fee)
{
	balance -= fee;
}
void card::cost_shop(int fee)
{
	balance -= fee;
}
void card::show()
{
	student::show();
	cout << "学生余额:" << balance << endl;
}
card::card(int no, string null_name, float _balance) :student(no, null_name)
{
	balance = _balance;
};
card::card(const card &p)
{
	cout << "Used Copy Constructor" << endl;
};
card::card()
{
	cout << "Used Constructor" << endl;
};
card::~card()
{
	cout << "Used Destructor" << endl;
};
class library :student
{
	string * borrowed = new string[10];
	int num;
public:
	library();
	~library();
	library(const library &p);
	library(int no, string null_name);
	void borrow(string);
	void show();
};
library::library(int no, string null_name) :student(no, null_name)
{
	num = 0;
};
void library::borrow(string book)
{
	if (num <= 9)
	{
		*(borrowed + num) = book;
		num++;
	}
	else
		cout << "借书数量已达上限." << endl;
}
void library::show()
{
	student::show();
	cout << "结束数量:" << num << endl;
	cout << "已借书目:" << endl;
	for (int i = 0; i <= num; i++)
		cout << (*(borrowed + i)).c_str() << endl;
}
library::library(const library &p)
{
	cout << "Used Copy Constructor" << endl;
};
library::library()
{
	cout << "Used Constructor" << endl;
};
library::~library()
{
	cout << "Used Destructor" << endl;
};
int main()
{
	student stu1(100, "gao");
	stu1.show();
	card ID_card(101, "dai", 8000);
	ID_card.show();
	library reader(102, "chen");
	reader.show();
	reader.borrow("法律道德与基础");
	reader.show();
	system("pause");
}