#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
#include<ctime>
using namespace std;
//学生的结构体定义
struct Student
{
	//姓名
	string sName;
	//分数
	int score;
};
//老师的结构体定义
struct Teacher
{
	//姓名
	string tName;
	//学生数组
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
		//通过循环给每个老师所带的学生赋初值
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
		cout << "老师姓名：" << tArray[i].tName << endl;
		int j = 0;
		for (j = 0; j < len; j++)
		{

			cout << "\t学生姓名： " << tArray[i].sArray[j].sName <<
				"考试分数： " << tArray[i].sArray[j].score << endl;
		}
	}
}
int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));
	//创建三名老师的数组
	struct Teacher tArray[3];
	//通过函数给三名老师的信息赋值，并且给老师带的学生赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);
	//打印所有老师及所带老师的信息 
	PrintInfo(tArray, len);
	return 0;
}