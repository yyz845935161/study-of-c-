#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
#include<ctime>
using namespace std;
//ѧ���Ľṹ�嶨��
struct Student
{
	//����
	string sName;
	//����
	int score;
};
//��ʦ�Ľṹ�嶨��
struct Teacher
{
	//����
	string tName;
	//ѧ������
	struct Student sArray[5];
};
void allocateSpace(struct Teacher tArray[], int len)
{
	int i = 0;
	string nameSeed = "ABCDEF";
	for (i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];
		//ͨ��ѭ����ÿ����ʦ������ѧ������ֵ
		int j = 0;

		for (j = 0; j < len; j++)
		{
			tArray[i].sArray[j].sName = "Student";
			tArray[i].sArray[j].sName += nameSeed;
			int random = rand() % 61 + 40;
			tArray[i].sArray[j].score = random;
		}
	}
}
void PrintInfo(struct Teacher tArray[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		cout << "��ʦ������" << tArray[i].tName << endl;
		int j = 0;
		for (j = 0; j < len; j++)
		{

			cout << "\tѧ�������� " << tArray[i].sArray[j].sName <<
				"���Է����� " << tArray[i].sArray[j].score << endl;
		}
	}
}
int main()
{
	//���������
	srand((unsigned int)time(NULL));
	//����������ʦ������
	struct Teacher tArray[3];
	//ͨ��������������ʦ����Ϣ��ֵ�����Ҹ���ʦ����ѧ����ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);
	//��ӡ������ʦ��������ʦ����Ϣ 
	PrintInfo(tArray, len);
	return 0;
}