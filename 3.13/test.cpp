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
	SeqListPrint(&s);
}

void testHeadPop()
{
	SL s;
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 8);
	SeqListPrint(&s);
	SeqListPopFront(&s);

	SeqListPrint(&s);

	SeqListPushFront(&s, 100);
	SeqListPushFront(&s, 11);
	SeqListPushFront(&s, 3);
	SeqListPrint(&s);
	SeqListPopFront(&s); 
	SeqListPopFront(&s);
	SeqListPrint(&s);


	
}
int main()
{
	testHeadPop();
	//testSL();
	//testHead();

	return 0;
}