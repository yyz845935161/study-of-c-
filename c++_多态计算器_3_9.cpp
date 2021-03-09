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
//�ӷ�
class addCalculate :public abstractCalculate
{
public:
	double getResult()
	{
		return Num_a + Num_b;
	}

};
//����
class subCalculate :public abstractCalculate
{
public:
	double getResult()
	{
		return Num_a - Num_b;
	}

};
//�˷�
class mulCalculate :public abstractCalculate
{
public:
	double getResult()
	{
		return Num_a * Num_b;
	}

};

//����
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
	addCalculate add;  //�����ӷ��Ķ���
	add.Num_a = a;
	add.Num_b = b;
	cout << a << "+" << b << "="<<actCalculate(add)<<endl<<endl; //�Ѽӷ�������Ϊ�������ã����ú���

	subCalculate sub; //������������
	abstractCalculate* ps = &sub;//������ָ�룬ָ���������
	ps->Num_a = a;
	ps->Num_b = b;
	cout << a << "-" << b << "=" << ps->getResult() << endl << endl;

	abstractCalculate* pm = new mulCalculate; //������ָ�룬ָ��������ٵ��������
	pm->Num_a = a;
	pm->Num_b = b;
	cout << a << "*" << b << "=" << pm->getResult() << endl << endl;

	divCalculate div;  //�����������
	abstractCalculate &pd = div;//�����������ã�ָ���������  abstractCalculate * const pd =  &div
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