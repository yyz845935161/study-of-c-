#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


void My_printf(int arr[],int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("%d ",  arr[i]);
	}
	printf("\n\n");
}
//Ç°×ººÍ
int main()
{
	int right;
	int N, K;
	int arr[30] = {0};
	int temp = 0;
	int sum = 0;
	int time = 0;
	scanf("%d %d", &N, &K);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &temp);
		sum +=temp;
		arr[i] = sum;
		arr[i] = arr[i] % K;
	}
	
	My_printf(arr, N);

	for (int i = 0; i < N; i++)
	{
		if (arr[i]==0)
		{
			time++;
		}
		for (int j = i+1; j < N; j++)
		{
			if (arr[i]==arr[j])
			{
				time++;
			}
		}
	}

	printf("%d", time);
	return 0;
}