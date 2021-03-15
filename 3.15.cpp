#include <iostream>
using namespace std;

template<typename T>
void My_printf(T arr[], int length);

//≈≈–ÚÀ„∑®
template<typename T>
void My_sselect_sort(T arr[],int length)
{
	for (int i = 0; i < length-1; i++)
	{
		for (int j = i+1; j < length; j++)
		{
			if (arr[i]<arr[j])
			{
				T temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	My_printf<T>(arr, length);
}

template<typename T>
void My_printf(T arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " " << endl;
	}
}


int main()
{
	int arr[] = { 5,4,2,8,9,1,10 };
	int length = sizeof(arr) / sizeof(arr[0]);

	My_sselect_sort<int>(arr, length);
	return 0;
}