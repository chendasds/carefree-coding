#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"
#include<stdio.h>

void TestSL1()
{
	SL s1;
	SLInit(&s1);//初始化
	SLPushBack(&s1, 1);//尾插
	SLPushBack(&s1, 2);
	SLPushBack(&s1, 3);
	SLPushBack(&s1, 4);
	SLPushBack(&s1, 5);
	SLPrint(&s1);//打印

	//SLPopBack(&s1);//尾删
	//SLPrint(&s1);

	SLPushFront(&s1, 10);//头插
	SLPrint(&s1);

	//SLPopFront(&s1);//头删
	//SLPrint(&s1);

	SLInsert(&s1, 2, 30);//在pos下标处插入元素x
	SLPrint(&s1);

	SLErase(&s1, 3);//删除下标为3的元素
	SLPrint(&s1);
}
int main()
{
	TestSL1();
}