#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include<map>
#include"speaker.h"
#include<algorithm>
#include<deque>
#include<functional>
#include<numeric>
#include<fstream>
#include<ctime>
//设计演讲管理类

class SpeechManager
{
public:

	SpeechManager();

	//菜单功能
	void show_Menu();

	//退出系统
	void exitSystem();

	~SpeechManager();

	//初始化容器
	void initSpeech();

	//创建12名选手
	void createSpeaker();

	//开始比赛
	void startSpeech();

	//显示得分
	void showScore();

	//抽签
	void speechDraw();

	//比赛
	void speechContest();

	//保存历史数据
	void saveRecord();

	//读取记录
	void loadRecord();

	//显示往届记录
	void showRecord();

	//判断文件是否为空
	bool fileIsEmpty;

	//存放往届记录的容器
	map<int, vector<string>>m_Record;

	//成员属性
	//保存第一轮比赛选手编号容器
	vector<int>v1;

	//第一轮晋级选手编号容器
	vector<int>v2;

	//胜出前三名选手编号容器
	vector<int>vVictory;

	//存放编号以及对应具体选手容器
	map<int, Speaker> m_Speaker;

	//清空文件
	void clearRecord();

	int m_Index;
};