#include"speechManager.h"

void test_12_speaker()
{
	SpeechManager temp;
	for (map<int,Speaker>::iterator it = temp.m_Speaker.begin();it!= temp.m_Speaker.end(); it++)
	{
		cout << "ѡ�ֱ�ţ�" << it->first << "  ѡ������:" <<
			it->second.m_string << "   ѡ�ֵ÷�1��" <<
			it->second.m_score[0] << "   ѡ�ֵ÷�2:" <<
			it->second.m_score[1] << endl;
	}
}

int main()
{
	//test_12_speaker();
	SpeechManager sm;
	

	int choice = 0;//�洢����


	while (true)
	{
		sm.show_Menu();
		cout << "�����룺" << endl;
		cin >> choice;
		switch (choice)
		{
		
			case 0://�˳�ϵͳ
				sm.exitSystem();
				break;
			case 1://��ʼ����
				sm.startSpeech();
				break;
			case 2://�鿴�������
				break;
			case 3://��ձ�����¼
				break;
			default:
				system("cls");//����
				break;
		}
	}

	system("pause");
	return 0;
}
