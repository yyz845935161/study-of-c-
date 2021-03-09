#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class abstractCalculate
{
public:
	double Num_a;
	double Num_b;
	virtual double getResult()
	{
		return 0;
	}
};
//加法
class addCalculate :public abstractCalculate
{
public:
	double getResult()
	{
		return Num_a + Num_b;
	}

};
//减法
class subCalculate :public abstractCalculate
{
public:
	double getResult()
	{
		return Num_a - Num_b;
	}

};
//乘法
class mulCalculate :public abstractCalculate
{
public:
	double getResult()
	{
		return Num_a * Num_b;
	}

};

//除法
class divCalculate :public abstractCalculate
{
public:
	double getResult()
	{
		return Num_a / Num_b;
	}

};

double actCalculate(abstractCalculate &p)
{
	return p.getResult();
}

void test01(double a,double b)
{
	addCalculate add;  //创建加法的对象
	add.Num_a = a;
	add.Num_b = b;
	cout << a << "+" << b << "="<<actCalculate(add)<<endl<<endl; //把加法对象作为父类引用，调用函数

	subCalculate sub; //创建减法对象
	abstractCalculate* ps = &sub;//创建父指针，指向子类对象
	ps->Num_a = a;
	ps->Num_b = b;
	cout << a << "-" << b << "=" << ps->getResult() << endl << endl;

	abstractCalculate* pm = new mulCalculate; //创建父指针，指向堆区开辟的子类对象
	pm->Num_a = a;
	pm->Num_b = b;
	cout << a << "*" << b << "=" << pm->getResult() << endl << endl;

	divCalculate div;  //创建子类对象
	abstractCalculate &pd = div;//创建父类引用，指向子类对象  abstractCalculate * const pd =  &div
	pd.Num_a = a;
	pd.Num_b = b;
	cout << a << "/" << b << "=" << pd.getResult() << endl << endl;
}

int main()
{
	test01(25,5 );
	system("pause");
	return 0;
}