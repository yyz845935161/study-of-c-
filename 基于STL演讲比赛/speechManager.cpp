#include "speechManager.h"

//构造函数
SpeechManager::SpeechManager()
{
	//初始化容器和属性
	this->initSpeech();

	//创建12名选手
	this->createSpeaker();
}

//开始比赛
void SpeechManager::startSpeech()
{
	//第一轮开始比赛

	//1、抽签
	this->speechDraw();
	//2、比赛

	//显示晋级结果


	//第二轮开始比赛

	//1、抽签

	//2、比赛

	//显示晋级结果
}

//抽签
void SpeechManager::speechDraw()
{
	cout << "第 " << this->m_Index << " 轮比赛正在抽签" << endl;
	cout << "--------------------------------------"<<endl;
	cout << "抽签后的结果如下:" << endl;

	if (this->m_Index == 1)
	{
		//第一轮比赛
		random_shuffle(v1.begin(), v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << "  ";
		}
		cout << endl;
	}
	else
	{
		random_shuffle(v2.begin(), v2.end());
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << "  ";
		}
		cout << endl;
	}
	cout << "--------------------------------------" << endl;
	system("pause");
}


//菜单
void SpeechManager::show_Menu()
{
	cout << "********************************************" << endl;
	cout << "*************  欢迎参加演讲比赛 ************" << endl;
	cout << "*************  1.开始演讲比赛  *************" << endl;
	cout << "*************  2.查看往届记录  *************" << endl;
	cout << "*************  3.清空比赛记录  *************" << endl;
	cout << "*************  0.退出比赛程序  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

//退出系统
void SpeechManager::exitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}


//容器置空
void SpeechManager::initSpeech()
{
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();

	//初始化比赛轮次
	this->m_Index = 1;
}

//创建12名选手
void SpeechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		Speaker temp;
		temp.m_string = "选手";
		temp.m_string += nameSeed[i];

		
		for (int j = 0; j < (sizeof(temp.m_score)) / (sizeof(temp.m_score[0])); j++)
		{
			temp.m_score[j] = 0;
		}

		//创建选手编号，并放入到v1容器中
		this->v1.push_back(i+10001);

		//选手编号以及对应选手，放入到map容器中
		this->m_Speaker.insert(make_pair(i + 10001, temp));
	}
}


//析构函数
SpeechManager::~SpeechManager()
{

}