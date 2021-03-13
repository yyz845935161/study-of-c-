#pragma once
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <assert.h>
#define N 10
typedef int SLDataType;


typedef struct  SeqList
{
	SLDataType* a;
	int size;
	int capacity;
}SL, SeqList;

//���
void SeqListPrint(SL* ps);
//�ж��Ƿ���Ԫ��
void Is_Full(SL* ps);

//��ʼ��
void SeqListInit(SL *ps);

//β����βɾ   //ͷ��ͷɾ
void SeqListPushBack(struct  SeqList* ps, SLDataType x);
void SeqListPopBack(struct  SeqList* ps);
void SeqListPushFront(struct  SeqList* ps, SLDataType x);
void SeqListPopFront(struct  SeqList* ps);

//����λ�õĲ���ɾ��   position λ��
void SeqListInsert(struct  SeqList* ps,int pos);
void SeqListErase(struct  SeqList* ps,int pos);