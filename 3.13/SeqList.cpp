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
	if (ps->capacity == ps->size)
	{
		ps->capacity *= 2;
		ps->a = (SLDataType*)realloc(ps->a,sizeof(SLDataType)* ps->capacity);
		if (ps->a==NULL)
		{
			printf("增容失败\n");
			exit(-1);
		}

	}
	ps->a[ps->size] = x;
	ps->size++;

};

//尾部删除
void SeqListPopBack(struct  SeqList* ps) 
{
	assert(ps);
	//ps->a[ps->size - 1] = 0;
	ps->size--;
}

//头插
void SeqListPushFront(struct  SeqList* ps, SLDataType x) 
{
	assert(ps);
	//满了要增容
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
	for (int  i = (ps->size-1); i >= 0; i--)
	{
		 ps->a[i + 1] = ps->a[i];
	}
	ps->a[0] = x;
	ps->size++;
}

void SeqListPopFront(struct  SeqList* ps) {};

//任意位置的插入删除   position 位置
void SeqListInsert(struct  SeqList* ps, int pos) {};
void SeqListErase(struct  SeqList* ps, int pos) {};