#include "speechManager.h"

//构造函数
SpeechManager::SpeechManager()
{
	//初始化容器和属性
	this->initSpeech();

	//创建12名选手
	this->createSpeaker();

	//加载往届记录
	this->loadRecord();
}

//开始比赛
void SpeechManager::startSpeech()
{
	//第一轮开始比赛

	//1、抽签
	this->speechDraw();
	//2、比赛
	this->speechContest();
	//显示晋级结果
	this->showScore();

	//第二轮开始比赛
	this->m_Index++;
	//1、抽签
	this->speechDraw();
	//2、比赛
	speechContest();
	//3、显示最终结果
	this->showScore();
	//保存文件到文件中
	this->saveRecord();

	//重置
	//初始化容器和属性
	this->initSpeech();
	//创建12名选手
	this->createSpeaker();
	//加载往届记录
	this->loadRecord();


	cout << "本届比赛完毕" << endl;
	system("pause");
	system("cls");


}


//比赛
void SpeechManager::speechContest()
{
	cout << "------------第" << this->m_Index << "轮比赛正式开始-------------" << endl;
	//准备临时容器 存放小组成绩
	multimap<double, int, greater<double>> groupSocre;

	int num = 0; //记录人员个数6人一组

	vector<int>v_Src;//比赛选手容器
	if (this->m_Index == 1)
	{
		v_Src = v1;
	}
	else
	{
		v_Src = v2;
	}
	//遍历所有选手进行比赛
	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
	{
		num++;
		//评委打分
		deque<double>d;
		for (int i = 0; i < 10; i++)
		{
			d.push_back((rand() % 401 + 600) / 10.f);
			//cout << d.back()<<"  ";
		}
		//cout << endl;

		//排序
		sort(d.begin(), d.end(), greater<double>());

		//去掉最高分和最低分
		d.pop_back();
		d.pop_front();

		double sum = accumulate(d.begin(), d.end(), 0.0f);//总分
		double avg = sum / (double)d.size(); //平均分
		//cout << "编号:" << *it << "  姓名:" << this->m_Speaker[*it].m_name << "   得分：" << avg << endl;
		//将平均分放入容器中
		this->m_Speaker[*it].m_score[this->m_Index - 1] = avg;

		//讲打分数据放入小组容器中
		groupSocre.insert(make_pair(avg, *it));
		//每六人取出前三名
		if (num % 6 == 0)
		{
			cout << "第" << num / 6 << "小组比赛名次" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupSocre.begin(); it != groupSocre.end(); it++)
			{
				cout << "编号:" << it->second << "   姓名："
					<< this->m_Speaker[it->second].m_name
					<< "   成绩:" << this->m_Speaker[it->second].m_score[this->m_Index - 1]
					<< endl;;
			}

			//取走前三名 
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
	cout << "-------------第" << this->m_Index << "轮比赛完毕----------" << endl;
	system("pause");
}


//显示得分
void SpeechManager::showScore()
{
	cout << "------------第" << this->m_Index << "轮晋级选手信息如下：-------------" << endl;
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
		cout << "选手编号:" << *it << "   姓名：" << this->m_Speaker[*it].m_name <<
			"   得分：" << this->m_Speaker[*it].m_score[this->m_Index - 1] << endl;;
	}

	system("pause");
	system("cls");
	this->show_Menu();
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

	this->m_Speaker.clear();
}

//创建12名选手
void SpeechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		Speaker temp;
		temp.m_name = "选手";
		temp.m_name += nameSeed[i];

		
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



//保存历史数据
void SpeechManager::saveRecord()
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);//用append追加方式写

	//将每个人的数据写入
	for (vector<int>::iterator it = vVictory.begin(); it != vVictory.end(); it++)
	{
		ofs <<*it << "," << this->m_Speaker[*it].m_score[1] << ",";
	}
	ofs << endl;

	//关闭
	ofs.close();
	cout << "记录已近保存！" << endl;

	this->fileIsEmpty = false;
}

//读取记录
void SpeechManager::loadRecord()
{
	ifstream ifs("speech.csv", ios::in);//读文件
	if(!ifs.is_open())
	{ 
		this->fileIsEmpty = true;
		//cout << "文件不存在" << endl;
		ifs.close();
		return;
	}

	//文件清空情况;
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "文件为空" << endl;
		this->fileIsEmpty = true;
		ifs.close();
		return;
	}

	//文件不为空
	this->fileIsEmpty = false;

	ifs.putback(ch);//讲上面读取的单个字符 放回来
	string data;
	int index = 0;
	while (ifs >> data)
	{
		//cout << data << endl;
		//10002,86.675,10009,81.3,10007,78.55,

		vector<string>v;//存放6个string的情况
		int pos = -1;//查到","位置的变量
		int start = 0;

		while (true)
		{

			pos = data.find(',', start);
			if (pos == -1)
			{
				//没有找到
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
		cout<<"第" << it->first << "届   冠军编号：" << it->second[0] << "   分数:" << it->second[1] << endl;
	}
}

//显示往届记录
void SpeechManager::showRecord()
{
	if (this->fileIsEmpty)
	{
		cout << "文件为空或者不存在" << endl;
		system("pause");
		system("cls");
		return;
	}

	for (int i = 0; i < this->m_Record.size(); i++)
	{
		cout << "第" << i + 1 << "届" <<
			"冠军编号:" << this->m_Record[i][0] << "  得分:" << this->m_Record[i][0] <<
			"  亚军编号" << this->m_Record[i][2] << "  得分:" << this->m_Record[i][3] <<
			"  季军编号" << this->m_Record[i][4] << "  得分:" << this->m_Record[i][5]
			<< endl;;
	}
	system("pause");
	system("cls");
}

//清空文件
void SpeechManager::clearRecord()
{
	cout << "是否确定情况文件？ 1:yes 2:no"<<endl;
	int select = 0;
	cin >> select;
	if (select == 1)
	{
		//确认清空
		ofstream ofs("speech.csv", ios::trunc);
		ofs.close();

		//初始化容器和属性
		this->initSpeech();

		//创建12名选手
		this->createSpeaker();

		//加载往届记录
		this->loadRecord();

		cout << "清空成功！" << endl;
		system("pause");
		system("cls");
	}

	

	else
	{
		return;
	}

}

//析构函数
SpeechManager::~SpeechManager()
{

}