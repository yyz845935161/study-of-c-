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

//
//int removeDuplicates(int* nums, int numsSize) {
//    int mark = 0;
//    for (int i = 1; i < numsSize - mark; i++)
//    {
//        if (nums[i] == nums[i - 1])
//        {
//            for (int j = i--; j < numsSize - 1 - mark; j++)
//            {
//                nums[j] = nums[j + 1];
//            }
//            mark++;
//
//        }
//    }
//
//    numsSize -= mark;
//    return numsSize;
//}
//
//int main()
//{
//    int arr[10] = {0,0,1,1,1,2,2,3,3,4};
//    removeDuplicates(arr, 10);
//    return 0;
//}
//
//
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
//{
//    int n1 = 0;
//    int n2 = 0;
//    for (int i = 0; i < m + n; i++)
//    {
//        if (n2 == n)break;
//        if (n1 == m)
//        {
//            for (int j = nums1Size; j < m + n; j++)
//            {
//                nums1[j] = nums2[n2++];
//                nums1Size++;
//            }
//            break;
//        }
//
//        if (nums1[n1] > nums2[n2])
//        {
//            for (int j = nums1Size - 1; j > n1; n--)
//            {
//                nums1[j] = nums1[j - 1];
//            }
//            nums1[n1] = nums2[n2];
//            nums1Size++;
//            n2++;
//        }
//        n1++;
//    }
//}

//
//int i = m-- + --n;
//
//while (n >= 0) {
//    nums1[i--] = m >= 0 && nums1[m] > nums2[n] ? nums1[m--] : nums2[n--];


void ro(int* nums, int a, int b)
{
    while (a < b)
    {
        int temp = nums[a];
        nums[a] = nums[b];
        nums[b] = temp;
        a++;
        b--;
    }
}

void rotate(int* nums, int numsSize, int k) {

    if (k == 0)return;
    ro(nums, 0, numsSize - 1 - k);
    ro(nums, numsSize - k, numsSize - 1);
    ro(nums, 0, numsSize - 1);

}


void ro(int* nums, int a, int b)
{
    while (a < b)
    {
        int temp = nums[a];
        nums[a] = nums[b];
        nums[b] = temp;
        a++;
        b--;
    }
}

















void rotate(int* nums, int numsSize, int k) {

    k %= numsSize;

    ro(nums, 0, numsSize - 1 - k);
    ro(nums, numsSize - k, numsSize - 1);
    ro(nums, 0, numsSize - 1);

}