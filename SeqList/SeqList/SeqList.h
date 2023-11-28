#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int SLDataType;

typedef struct SeqList {
	SLDataType* a;//接收数据的数组
	int size;//有效数据
	int capacity;//空间容量
}SL;

void SLInit(SL* psl);
void SLDestroy(SL* psl);
void SLPrint(SL* psl);
void SLCheckCapacity(SL* psl);
void SLPushBack(SL* psl, SLDataType x);
void SLPopBack(SL* psl);
void SLPushFront(SL* psl, SLDataType x);
void SLPopFront(SL* psl);
void SLInsert(SL* psl, int pos, SLDataType x);
void SLErase(SL* psl, int pos);