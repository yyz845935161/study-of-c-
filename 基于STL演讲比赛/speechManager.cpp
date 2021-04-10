#include "speechManager.h"

//���캯��
SpeechManager::SpeechManager()
{
	//��ʼ������������
	this->initSpeech();

	//����12��ѡ��
	this->createSpeaker();

	//���������¼
	this->loadRecord();
}

//��ʼ����
void SpeechManager::startSpeech()
{
	//��һ�ֿ�ʼ����

	//1����ǩ
	this->speechDraw();
	//2������
	this->speechContest();
	//��ʾ�������
	this->showScore();

	//�ڶ��ֿ�ʼ����
	this->m_Index++;
	//1����ǩ
	this->speechDraw();
	//2������
	speechContest();
	//3����ʾ���ս��
	this->showScore();
	//�����ļ����ļ���
	this->saveRecord();

	//����
	//��ʼ������������
	this->initSpeech();
	//����12��ѡ��
	this->createSpeaker();
	//���������¼
	this->loadRecord();


	cout << "����������" << endl;
	system("pause");
	system("cls");


}


//����
void SpeechManager::speechContest()
{
	cout << "------------��" << this->m_Index << "�ֱ�����ʽ��ʼ-------------" << endl;
	//׼����ʱ���� ���С��ɼ�
	multimap<double, int, greater<double>> groupSocre;

	int num = 0; //��¼��Ա����6��һ��

	vector<int>v_Src;//����ѡ������
	if (this->m_Index == 1)
	{
		v_Src = v1;
	}
	else
	{
		v_Src = v2;
	}
	//��������ѡ�ֽ��б���
	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
	{
		num++;
		//��ί���
		deque<double>d;
		for (int i = 0; i < 10; i++)
		{
			d.push_back((rand() % 401 + 600) / 10.f);
			//cout << d.back()<<"  ";
		}
		//cout << endl;

		//����
		sort(d.begin(), d.end(), greater<double>());

		//ȥ����߷ֺ���ͷ�
		d.pop_back();
		d.pop_front();

		double sum = accumulate(d.begin(), d.end(), 0.0f);//�ܷ�
		double avg = sum / (double)d.size(); //ƽ����
		//cout << "���:" << *it << "  ����:" << this->m_Speaker[*it].m_name << "   �÷֣�" << avg << endl;
		//��ƽ���ַ���������
		this->m_Speaker[*it].m_score[this->m_Index - 1] = avg;

		//��������ݷ���С��������
		groupSocre.insert(make_pair(avg, *it));
		//ÿ����ȡ��ǰ����
		if (num % 6 == 0)
		{
			cout << "��" << num / 6 << "С���������" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupSocre.begin(); it != groupSocre.end(); it++)
			{
				cout << "���:" << it->second << "   ������"
					<< this->m_Speaker[it->second].m_name
					<< "   �ɼ�:" << this->m_Speaker[it->second].m_score[this->m_Index - 1]
					<< endl;;
			}

			//ȡ��ǰ���� 
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator it = groupSocre.begin(); it != groupSocre.end()&&count<3; it++,count++)
			{
				if (this->m_Index == 1)
				{
					v2.push_back((*it).second);
				}
				else
				{
					vVictory.push_back((*it).second);
				}
			}


			groupSocre.clear();
		}
	}
	cout << "-------------��" << this->m_Index << "�ֱ������----------" << endl;
	system("pause");
}


//��ʾ�÷�
void SpeechManager::showScore()
{
	cout << "------------��" << this->m_Index << "�ֽ���ѡ����Ϣ���£�-------------" << endl;
	vector<int>v;
	if (this->m_Index ==1)
	{
		v = v2;
	}
	else
	{
		v = vVictory;
	}

	for (vector<int>::iterator it=v.begin();it!=v.end();it++)
	{
		cout << "ѡ�ֱ��:" << *it << "   ������" << this->m_Speaker[*it].m_name <<
			"   �÷֣�" << this->m_Speaker[*it].m_score[this->m_Index - 1] << endl;;
	}

	system("pause");
	system("cls");
	this->show_Menu();
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

	this->m_Speaker.clear();
}

//����12��ѡ��
void SpeechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		Speaker temp;
		temp.m_name = "ѡ��";
		temp.m_name += nameSeed[i];

		
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



//������ʷ����
void SpeechManager::saveRecord()
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);//��append׷�ӷ�ʽд

	//��ÿ���˵�����д��
	for (vector<int>::iterator it = vVictory.begin(); it != vVictory.end(); it++)
	{
		ofs <<*it << "," << this->m_Speaker[*it].m_score[1] << ",";
	}
	ofs << endl;

	//�ر�
	ofs.close();
	cout << "��¼�ѽ����棡" << endl;

	this->fileIsEmpty = false;
}

//��ȡ��¼
void SpeechManager::loadRecord()
{
	ifstream ifs("speech.csv", ios::in);//���ļ�
	if(!ifs.is_open())
	{ 
		this->fileIsEmpty = true;
		//cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}

	//�ļ�������;
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "�ļ�Ϊ��" << endl;
		this->fileIsEmpty = true;
		ifs.close();
		return;
	}

	//�ļ���Ϊ��
	this->fileIsEmpty = false;

	ifs.putback(ch);//�������ȡ�ĵ����ַ� �Ż���
	string data;
	int index = 0;
	while (ifs >> data)
	{
		//cout << data << endl;
		//10002,86.675,10009,81.3,10007,78.55,

		vector<string>v;//���6��string�����
		int pos = -1;//�鵽","λ�õı���
		int start = 0;

		while (true)
		{

			pos = data.find(',', start);
			if (pos == -1)
			{
				//û���ҵ�
				break;
			}

			string temp = data.substr(start, pos - start);
			//cout << temp << endl;
			start = pos + 1;
			v.push_back(temp);
		}
		this->m_Record.insert(make_pair(index++, v));
		v.clear();

	}
	ifs.close();

	for (map<int, vector<string>>::iterator it = m_Record.begin(); it != m_Record.end(); it++)
	{
		cout<<"��" << it->first << "��   �ھ���ţ�" << it->second[0] << "   ����:" << it->second[1] << endl;
	}
}

//��ʾ�����¼
void SpeechManager::showRecord()
{
	if (this->fileIsEmpty)
	{
		cout << "�ļ�Ϊ�ջ��߲�����" << endl;
		system("pause");
		system("cls");
		return;
	}

	for (int i = 0; i < this->m_Record.size(); i++)
	{
		cout << "��" << i + 1 << "��" <<
			"�ھ����:" << this->m_Record[i][0] << "  �÷�:" << this->m_Record[i][0] <<
			"  �Ǿ����" << this->m_Record[i][2] << "  �÷�:" << this->m_Record[i][3] <<
			"  �������" << this->m_Record[i][4] << "  �÷�:" << this->m_Record[i][5]
			<< endl;;
	}
	system("pause");
	system("cls");
}

//����ļ�
void SpeechManager::clearRecord()
{
	cout << "�Ƿ�ȷ������ļ��� 1:yes 2:no"<<endl;
	int select = 0;
	cin >> select;
	if (select == 1)
	{
		//ȷ�����
		ofstream ofs("speech.csv", ios::trunc);
		ofs.close();

		//��ʼ������������
		this->initSpeech();

		//����12��ѡ��
		this->createSpeaker();

		//���������¼
		this->loadRecord();

		cout << "��ճɹ���" << endl;
		system("pause");
		system("cls");
	}

	

	else
	{
		return;
	}

}

//��������
SpeechManager::~SpeechManager()
{

}