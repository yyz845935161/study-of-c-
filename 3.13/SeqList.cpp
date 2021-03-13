#include "SeqList.h"
#define Snum 1

//��ʼ��
void SeqListInit(SL *ps)
{
	ps->a = (SLDataType*)malloc(sizeof(SLDataType) * Snum);
	if (ps->a == NULL)
	{
		printf("����ʧ��\n");
		exit(-1);
	}
	ps->size = 0;
	ps->capacity = Snum;
}


//���
void SeqListPrint(SL* ps)
{
	assert(ps);
	for (int  i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n\n");
};

//β����βɾ   //ͷ��ͷɾ
//β��
void SeqListPushBack(struct  SeqList* ps, SLDataType x)
{
	assert(ps);

	//����Ҫ����
	if (ps->capacity == ps->size)
	{
		ps->capacity *= 2;
		ps->a = (SLDataType*)realloc(ps->a,sizeof(SLDataType)* ps->capacity);
		if (ps->a==NULL)
		{
			printf("����ʧ��\n");
			exit(-1);
		}

	}
	ps->a[ps->size] = x;
	ps->size++;

};

//β��ɾ��
void SeqListPopBack(struct  SeqList* ps) 
{
	assert(ps);
	//ps->a[ps->size - 1] = 0;
	ps->size--;
}

//ͷ��
void SeqListPushFront(struct  SeqList* ps, SLDataType x) 
{
	assert(ps);
	//����Ҫ����
	if (ps->capacity == ps->size)
	{
		ps->capacity *= 2;
		ps->a = (SLDataType*)realloc(ps->a, sizeof(SLDataType) * ps->capacity);
		if (ps->a == NULL)
		{
			printf("����ʧ��\n");
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

//ͷɾ
void SeqListPopFront(struct  SeqList* ps)
{
	for (int  i = 1; i <ps->size; i++)
	{
		ps->a[i - 1] = ps->a[i];
	}
	ps->size--;
}

//����λ�õĲ���ɾ��   position λ��
void SeqListInsert(struct  SeqList* ps, int pos) {};
void SeqListErase(struct  SeqList* ps, int pos) {};