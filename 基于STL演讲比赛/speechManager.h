#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include<map>
#include"speaker.h"
#include<algorithm>
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

	//抽签
	void speechDraw();

	//成员属性
	//保存第一轮比赛选手编号容器
	vector<int>v1;

	//第一轮晋级选手编号容器
	vector<int>v2;

	//胜出前三名选手编号容器
	vector<int>vVictory;

	//存放编号以及对应具体选手容器
	map<int, Speaker> m_Speaker;

	int m_Index;
};