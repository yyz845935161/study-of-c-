#include "SeqList.h"


//≤‚ ‘Õ∑Œ≤≤Â»Î
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

//≤‚ ‘Õ∑≤Â»Î
void testHeadpush()
{
	SL s;
	SeqListInit(&s);
	SeqListPushFront(&s, 100);
	SeqListPushFront(&s, 1);
}

void testHeadPop()
{
	SL s;
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 8);
	SeqListPopFront(&s);


	SeqListPushFront(&s, 100);
	SeqListPushFront(&s, 11);
	SeqListPushFront(&s, 3);
	SeqListPopFront(&s); 
	SeqListPushFront(&s, 66);

	SeqListInsert(&s,1,2);
	SeqListInsert(&s, 1,3);
	SeqListInsert(&s, 1,4);
	SeqListErase(&s, 1);
	SeqListErase(&s, 3);
	SeqListInsert(&s, 1, 25);
	SeqListErase(&s, 0);

	

	


	
}
int main()
{
	testHeadPop();
	//testSL();
	//testHeadpush();

	return 0;
}