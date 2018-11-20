#include<iostream>
#include<cmath>
using namespace std;
class complex {
	public:
		double real, imag;
		complex(double, double);
		complex();
		~complex();
		complex(const complex &p);
		double model();
		void show();
};
complex::complex(double real_, double imag_)
{
	real = real_;
	imag = imag_;
};
complex::complex()
{
	cout << "Used Constructor" << endl;
}
complex::~complex()
{
	cout << "Used Destructor" << endl;
}
complex::complex(const complex &p)
{
	cout << "Used Copy Constructor" << endl;
}
double complex::model()
{
	return (sqrt(real * real + imag * imag));
}
complex sum(complex &com1, complex &com2)
{
	return complex(com1.real + com2.real, com1.imag + com2.imag);
}
void complex::show()
{
	cout << real << " + " << imag << "i"<<endl;
}
int main()
{
	complex sum(complex &com1, complex &com2);
	complex A(3, 4);
	complex B(5, 12);
	A.show(); B.show();
	printf("A的模为：%f\n",A.model());
	printf("A的模为：%f\n",B.model());
	complex sum1;
	sum1 = sum(A,B);
	cout<<"A + B为：";
	sum1.show();
	system("pause");
}