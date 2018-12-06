#include<iostream>
#include<cmath>
using namespace std;
class object
{
	public:
		double x_coordinate;
		double y_coordinate;
		object();
		object(double x,double y);
		virtual void distance();
		object operator +(object &c);
		object operator -(object &c);
		object operator *(object &c);
};
object::object()
{
	cout << "调用无参构造函数"<<endl;
}
object::object(double x, double y)
{
	x_coordinate = x;
	y_coordinate = y;
}
void object::distance()
{
	 cout << "欧式距离:" << sqrt(x_coordinate * x_coordinate + y_coordinate * y_coordinate)<<endl;
}
object object::operator -(object &c)
{
	object t;
	t.x_coordinate = x_coordinate - c.x_coordinate;
	t.y_coordinate = y_coordinate - c.y_coordinate;
	return t;
}
object object::operator +(object &c)
{
	object t;
	t.x_coordinate = x_coordinate + c.x_coordinate;
	t.y_coordinate = y_coordinate + c.y_coordinate;
	return t;
}
object object::operator *(object &c)
{
	object t;
	t.x_coordinate = x_coordinate * c.x_coordinate;
	t.y_coordinate = y_coordinate * c.y_coordinate;
	return t;
}
class rectangle :public object
{
	float length;
	float width;
public:
	rectangle();
	rectangle(double x, double y, float a, float b);
	virtual void distance();
};
rectangle::rectangle()
{
	cout << "调用无参构造函数" << endl;
}
rectangle::rectangle(double x, double y, float a, float b) :object(x, y)
{
	length = a;
	width = b;
}
void rectangle::distance()
{
	cout << "一范距离:" << fabs(x_coordinate) + fabs(y_coordinate)<<endl;
}
int main()
{	
	object *p;
	rectangle *m;
	object temp1(3,4);
	rectangle temp2(6, 8, 1, 2);
	p = &temp1;
	m = &temp2;
	p->distance();
	m->distance();
	p = &temp2;
	p->distance();
	m->distance();
	rectangle a1(2, 2,1,1); rectangle a2(1,1,1, 1);
	object c1(2, 2), c2(1, 1), c3(0,0);
	a1.distance();
	system("pause");
	c3 = c1 + c2;
	system("pause");
	return 0;
}