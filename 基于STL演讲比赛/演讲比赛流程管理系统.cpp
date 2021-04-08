#include"speechManager.h"

void test_12_speaker()
{
	SpeechManager temp;
	for (map<int,Speaker>::iterator it = temp.m_Speaker.begin();it!= temp.m_Speaker.end(); it++)
	{
		cout << "选手编号：" << it->first << "  选手姓名:" <<
			it->second.m_string << "   选手得分1：" <<
			it->second.m_score[0] << "   选手得分2:" <<
			it->second.m_score[1] << endl;
	}
}

int main()
{
	//test_12_speaker();
	SpeechManager sm;
	

	int choice = 0;//存储输入


	while (true)
	{
		sm.show_Menu();
		cout << "请输入：" << endl;
		cin >> choice;
		switch (choice)
		{
		
			case 0://退出系统
				sm.exitSystem();
				break;
			case 1://开始比赛
				sm.startSpeech();
				break;
			case 2://查看往届比赛
				break;
			case 3://清空比赛记录
				break;
			default:
				system("cls");//清屏
				break;
		}
	}

	system("pause");
	return 0;
}
