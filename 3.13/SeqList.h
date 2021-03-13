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

//输出
void SeqListPrint(SL* ps);


//初始化
void SeqListInit(SL *ps);

//尾插入尾删   //头插头删
void SeqListPushBack(struct  SeqList* ps, SLDataType x);
void SeqListPopBack(struct  SeqList* ps);
void SeqListPushFront(struct  SeqList* ps, SLDataType x);
void SeqListPopFront(struct  SeqList* ps);

//任意位置的插入删除   position 位置
void SeqListInsert(struct  SeqList* ps,int pos);
void SeqListErase(struct  SeqList* ps,int pos);