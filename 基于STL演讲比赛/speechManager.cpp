#include "speechManager.h"

//���캯��
SpeechManager::SpeechManager()
{
	//��ʼ������������
	this->initSpeech();

	//����12��ѡ��
	this->createSpeaker();
}

//��ʼ����
void SpeechManager::startSpeech()
{
	//��һ�ֿ�ʼ����

	//1����ǩ
	this->speechDraw();
	//2������

	//��ʾ�������


	//�ڶ��ֿ�ʼ����

	//1����ǩ

	//2������

	//��ʾ�������
}

//��ǩ
void SpeechManager::speechDraw()
{
	cout << "�� " << this->m_Index << " �ֱ������ڳ�ǩ" << endl;
	cout << "--------------------------------------"<<endl;
	cout << "��ǩ��Ľ������:" << endl;

	if (this->m_Index == 1)
	{
		//��һ�ֱ���
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


//�˵�
void SpeechManager::show_Menu()
{
	cout << "********************************************" << endl;
	cout << "*************  ��ӭ�μ��ݽ����� ************" << endl;
	cout << "*************  1.��ʼ�ݽ�����  *************" << endl;
	cout << "*************  2.�鿴�����¼  *************" << endl;
	cout << "*************  3.��ձ�����¼  *************" << endl;
	cout << "*************  0.�˳���������  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

//�˳�ϵͳ
void SpeechManager::exitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}


//�����ÿ�
void SpeechManager::initSpeech()
{
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();

	//��ʼ�������ִ�
	this->m_Index = 1;
}

//����12��ѡ��
void SpeechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		Speaker temp;
		temp.m_string = "ѡ��";
		temp.m_string += nameSeed[i];

		
		for (int j = 0; j < (sizeof(temp.m_score)) / (sizeof(temp.m_score[0])); j++)
		{
			temp.m_score[j] = 0;
		}

		//����ѡ�ֱ�ţ������뵽v1������
		this->v1.push_back(i+10001);

		//ѡ�ֱ���Լ���Ӧѡ�֣����뵽map������
		this->m_Speaker.insert(make_pair(i + 10001, temp));
	}
}


//��������
SpeechManager::~SpeechManager()
{

}