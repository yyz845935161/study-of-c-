#include <iostream>
using namespace std;

////���ؾֲ���������
//int& test01() {
//	int a = 10; //�ֲ�����
//	return a;
//}
//
////���ؾ�̬��������
//int& test02() {
//	static int a = 20;
//	return a;
//}
//
//int& test4()
//{
//	static int b = 100;
//	return b;
//}
//
//int main() {
//
//	int& ref3 = test4();
//	test4() = 0;
//	////���ܷ��ؾֲ�����������
//	//int& ref = test01();
//	//cout << "ref = " << ref << endl;
//	//cout << "ref = " << ref << endl;
//
//	////�����������ֵ����ô���뷵������
//	//int& ref2 = test02();
//	//cout << "ref2 = " << ref2 << endl;
//	//cout << "ref2 = " << ref2 << endl;
//
//	//test02() = 1000;
//
//	//cout << "ref2 = " << ref2 << endl;
//	//cout << "ref2 = " << ref2 << endl;
//
//	system("pause");
//
//	return 0;
//}

//class student
//{
//public:
//	string name;
//	long long  id;
//
//	void coutName()
//	{
//		cout << name << endl;
//	}
//	
//	void coutId()
//	{
//		cout << id << endl;
//	}
//};
//
//int main()
//{
//	student ming;
//	ming.id = 201710113114;
//	ming.name = "����";
//
//	ming.coutName();
//	ming.coutId();
//	system("pause");
//	return 0;
//}

//class Cube
//{
//public:
//	int m_H;
//	int m_L;
//	int m_W;
//	void getHLW(int h, int l, int w)
//	{
//		m_H = h;
//		m_L = l;
//		m_W = w;
//	}
//
//	int getV()
//	{
//		return m_H * m_L *m_W;
//	}
//
//	int getS()
//	{
//		return (m_H * m_L) * 2 + (m_H * m_W) * 2+(m_W * m_L) * 2;
//	}
//};
//
//void isSame(Cube a,Cube b)
//{
//	if (a.getS()==b.getS() && a.getV()==b.getV())
//	{
//		cout<<"��ͬ"<<endl;
//	}
//	else
//	{
//		cout << "��ͬ"<<endl;
//	}
//}
//
//int main()
//{
//	Cube A;
//	Cube B;
//	A.getHLW(10, 15, 20);
//	B.getHLW(15, 10, 20);
//	isSame(A, B);
//	system("pause");
//	return 0;
//}