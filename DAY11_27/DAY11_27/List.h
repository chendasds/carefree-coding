#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int LTDataType;//Linked List Data Type
typedef struct ListNode {//��Ӧ����DoubleListNode,��ΪΪ����STL�Ᵽ��
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType val;
}LTNode;

LTNode* LTInit();
void LTPrint(LTNode* phead);
void LTPushBack(LTNode* phead, LTDataType x);
void LTPopBack(LTNode* phead);
void LTPushFront(LTNode* phead, LTDataType x);
void LTPopFront(LTNode* phead);
LTNode* LTFind(LTNode* phead, LTDataType x);
void LTInsert(LTNode* pos, LTDataType x);
void LTErase(LTNode* pos);
void LTDestory(LTNode* phead);