#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//#include<string.h>
//#define N 81
//int main(void)
//{
//	char str1[N];
//	char str2[N];
//	int i = 0;
//	int j = 0;
//	
//	scanf("%s",&str1);
//	int len = strlen(str1);
//	for (i = 0; i <len; i++)
//	{
//		if ((str1[i] >= 'a' && str1[i] <= 'z') || (str1[i] >= 'A' && str1[i] <= 'Z')
//			|| (str1[i] == ' '))
//		{
//			str2[j++] = str1[i];
//		}
//		if (i == len-1)str2[j] = str1[++i];
//	}
//	printf("%s", str2);
//	return 0;
//}


int removeDuplicates(int* nums, int numsSize) {
    int mark = 0;
    for (int i = 1; i < numsSize - mark; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            for (int j = i--; j < numsSize - 1 - mark; j++)
            {
                nums[j] = nums[j + 1];
            }
            mark++;

        }
    }

    numsSize -= mark;
    return numsSize;
}

int main()
{
    int arr[10] = {0,0,1,1,1,2,2,3,3,4};
    removeDuplicates(arr, 10);
    return 0;
}