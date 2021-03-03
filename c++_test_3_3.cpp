#include <iostream>
using namespace std;

void my_sob(int arr[], int length)
{
	int temp = 0;
	int count = 0;
	for (int i = 0; i < length-1; i++)
	{
		for (int j = 0; j < length-i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				count++;
			}
		}
		if (count == 0)
		{
			break;
		}

	}
}


int main()
{
	//自己的冒泡程序
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	int length = sizeof(arr) / sizeof(arr[0]);
	cout << "排序前" << endl;
	for (int i = 0; i < length; i++)
	{
		cout << arr[i]<<" ";
	}

	cout << endl;
	my_sob(arr, length);

	cout << "排序后" << endl;
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}


	return 0;
}