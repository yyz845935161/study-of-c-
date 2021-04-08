#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include<map>
#include"speaker.h"
#include<algorithm>
//����ݽ�������

class SpeechManager
{
public:

	SpeechManager();

	//�˵�����
	void show_Menu();

	//�˳�ϵͳ
	void exitSystem();

	~SpeechManager();

	//��ʼ������
	void initSpeech();

	//����12��ѡ��
	void createSpeaker();

	//��ʼ����
	void startSpeech();

	//��ǩ
	void speechDraw();

	//��Ա����
	//�����һ�ֱ���ѡ�ֱ������
	vector<int>v1;

	//��һ�ֽ���ѡ�ֱ������
	vector<int>v2;

	//ʤ��ǰ����ѡ�ֱ������
	vector<int>vVictory;

	//��ű���Լ���Ӧ����ѡ������
	map<int, Speaker> m_Speaker;

	int m_Index;
};