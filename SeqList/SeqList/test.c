#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"
#include<stdio.h>

void TestSL1()
{
	SL s1;
	SLInit(&s1);//��ʼ��
	SLPushBack(&s1, 1);//β��
	SLPushBack(&s1, 2);
	SLPushBack(&s1, 3);
	SLPushBack(&s1, 4);
	SLPushBack(&s1, 5);
	SLPrint(&s1);//��ӡ

	//SLPopBack(&s1);//βɾ
	//SLPrint(&s1);

	SLPushFront(&s1, 10);//ͷ��
	SLPrint(&s1);

	//SLPopFront(&s1);//ͷɾ
	//SLPrint(&s1);

	SLInsert(&s1, 2, 30);//��pos�±괦����Ԫ��x
	SLPrint(&s1);

	SLErase(&s1, 3);//ɾ���±�Ϊ3��Ԫ��
	SLPrint(&s1);
}
int main()
{
	TestSL1();
}