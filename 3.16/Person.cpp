//#include"Person.h"
//
//Person::Person(int age, string name)
//{
//	this->name = name;
//	this->age = age;
//}
//
//void Person::show()
//{
//	cout << "ÐÕÃû" << this->name << "\tÄêÁä" << this->age << endl;
//}

//int removeElement(int* nums, int numsSize, int val) {
//    int right = numsSize;
//    int left = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[left] != val)
//        {
//            left++;
//            continue;
//        }
//        if (nums[right] == val)
//        {
//            right--;
//            continue;
//        }
//
//        int temp = nums[left];
//        nums[left] = nums[right];
//        nums[right] = temp;
//        numsSize--;
//
//    }
//
//    return numsSize;
//
//
//}

int main()
{
    int nums[8] = { 0,1,2,2,3,0,4,2 };
    int numsSize = 8;
    int val = 2;
    int right = numsSize - 1;
    int left = 0;
    int newSize = numsSize;
    while(left<right)
    {
        if (nums[left] != val)
        {
            left++;
            continue;
        }
        if (nums[right] == val)
        {
            right--;
            newSize--;
            continue;
        }

        int temp = nums[left];
        nums[left] = nums[right];
        nums[right] = temp;
        right--;
        newSize--;

    }
}

int removeElement(int* nums, int numsSize, int val) {
    int right = numsSize - 1;
    int left = 0;
    int newSize = numsSize;
    while (left <= right)
    {
        if (nums[left] != val)
        {
            left++;
            continue;
        }
        if (nums[right] == val)
        {
            right--;
            newSize--;
            continue;
        }

        int temp = nums[left];
        nums[left] = nums[right];
        nums[right] = temp;
        right--;
        newSize--;

    }
    return newSize;

}