#include "SeqList.h"
#define Snum 1

//初始化
void SeqListInit(SL *ps)
{
	ps->a = (SLDataType*)malloc(sizeof(SLDataType) * Snum);
	if (ps->a == NULL)
	{
		printf("申请失败\n");
		exit(-1);
	}
	ps->size = 0;
	ps->capacity = Snum;
}

//判断是否满元素
void Is_Full(SL* ps)
{
	assert(ps);
	if (ps->capacity == ps->size)
	{
		ps->capacity *= 2;
		ps->a = (SLDataType*)realloc(ps->a, sizeof(SLDataType) * ps->capacity);
		if (ps->a == NULL)
		{
			printf("增容失败\n");
			exit(-1);
		}

	}
}


//输出
void SeqListPrint(SL* ps)
{
	assert(ps);
	for (int  i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n\n");
};

//尾插入尾删   //头插头删
//尾插
void SeqListPushBack(struct  SeqList* ps, SLDataType x)
{
	assert(ps);

	//满了要增容
	Is_Full(ps);
	
	ps->a[ps->size] = x;
	ps->size++;
	printf("尾插%d后的序列是",x);
	SeqListPrint(ps);

};

//尾部删除
void SeqListPopBack(struct  SeqList* ps) 
{
	assert(ps);
	//ps->a[ps->size - 1] = 0;
	ps->size--;
	printf("尾删 后的序列是");
	SeqListPrint(ps);
}

//头插
void SeqListPushFront(struct  SeqList* ps, SLDataType x) 
{
	assert(ps);
	//判断是否满元素
	Is_Full(ps);
	//满了要增容
	//if (ps->capacity == ps->size)
	//{
	//	ps->capacity *= 2;
	//	ps->a = (SLDataType*)realloc(ps->a, sizeof(SLDataType) * ps->capacity);
	//	if (ps->a == NULL)
	//	{
	//		printf("增容失败\n");
	//		exit(-1);
	//	}

	//}
	for (int  i = (ps->size-1); i >= 0; i--)
	{
		 ps->a[i + 1] = ps->a[i];
	}
	ps->a[0] = x;
	ps->size++;
	printf("头插%d后的序列是",x);
	SeqListPrint(ps);
}

//头删
void SeqListPopFront(struct  SeqList* ps)
{
	for (int  i = 1; i <ps->size; i++)
	{
		ps->a[i - 1] = ps->a[i];
	}
	ps->size--;
	printf("头删 后的序列是");
	SeqListPrint(ps);
}

//任意位置的插入删除   position 位置

//任意位置插入
void SeqListInsert(struct  SeqList* ps, int pos, SLDataType x)
{
	assert(ps);
	Is_Full(ps);
	for (int i = ps->size; i >pos; i--)
	{
		ps->a[i] = ps->a[i-1];
	}
	ps->a[pos] = x;
	ps->size--;
	printf("在第%d个位置插入%d后的序列是", pos,x);
	SeqListPrint(ps);

}

//任意位置删除
void SeqListErase(struct  SeqList* ps, int pos) 
{
	assert(ps);
	for (int i = pos; i < ps->size-i; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
	printf("在第%d个位置删除后的序列是", pos);
	SeqListPrint(ps);
};