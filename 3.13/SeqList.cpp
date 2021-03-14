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

//�ж��Ƿ���Ԫ��
void Is_Full(SL* ps)
{
	assert(ps);
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
	Is_Full(ps);
	
	ps->a[ps->size] = x;
	ps->size++;
	printf("β��%d���������",x);
	SeqListPrint(ps);

};

//β��ɾ��
void SeqListPopBack(struct  SeqList* ps) 
{
	assert(ps);
	//ps->a[ps->size - 1] = 0;
	ps->size--;
	printf("βɾ ���������");
	SeqListPrint(ps);
}

//ͷ��
void SeqListPushFront(struct  SeqList* ps, SLDataType x) 
{
	assert(ps);
	//�ж��Ƿ���Ԫ��
	Is_Full(ps);
	//����Ҫ����
	//if (ps->capacity == ps->size)
	//{
	//	ps->capacity *= 2;
	//	ps->a = (SLDataType*)realloc(ps->a, sizeof(SLDataType) * ps->capacity);
	//	if (ps->a == NULL)
	//	{
	//		printf("����ʧ��\n");
	//		exit(-1);
	//	}

	//}
	for (int  i = (ps->size-1); i >= 0; i--)
	{
		 ps->a[i + 1] = ps->a[i];
	}
	ps->a[0] = x;
	ps->size++;
	printf("ͷ��%d���������",x);
	SeqListPrint(ps);
}

//ͷɾ
void SeqListPopFront(struct  SeqList* ps)
{
	for (int  i = 1; i <ps->size; i++)
	{
		ps->a[i - 1] = ps->a[i];
	}
	ps->size--;
	printf("ͷɾ ���������");
	SeqListPrint(ps);
}

//����λ�õĲ���ɾ��   position λ��

//����λ�ò���
void SeqListInsert(struct  SeqList* ps, int pos, SLDataType x)
{
	assert(ps);
	Is_Full(ps);
	for (int i = ps->size; i >pos; i--)
	{
		ps->a[i] = ps->a[i-1];
	}
	ps->a[pos] = x;
	ps->size++;
	printf("�ڵ�%d��λ�ò���%d���������", pos,x);
	SeqListPrint(ps);

}

//����λ��ɾ��
void SeqListErase(struct  SeqList* ps, int pos) 
{
	assert(ps);
	for (int i = pos; i < ps->size-i; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size++;
	printf("�ڵ�%d��λ��ɾ�����������", pos);
	SeqListPrint(ps);
};