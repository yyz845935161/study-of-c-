#include "SeqList.h"


//����ͷβ����
void testSL()
{
	SL s; 
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 8);
	SeqListPrint(&s);

	SeqListPushFront(&s, 100);
	SeqListPrint(&s);

}

//����ͷ����
void testHead()
{
	SL s;
	SeqListInit(&s);
	SeqListPushFront(&s, 100);
	SeqListPushFront(&s, 1);
	SeqListPrint(&s);
}

int main()
{
	//testSL();
	//testHead();

	return 0;
}