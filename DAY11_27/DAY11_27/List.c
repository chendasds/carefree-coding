#define _CRT_SECURE_NO_WARNINGS
#include"List.h"

//申请空间
LTNode* CreateLTNode(LTDataType x) {
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (newnode == NULL) {
		perror("mallloc fail");
		exit(-1);
	}

	newnode->val = x;
	newnode->next = NULL;
	newnode->prev = NULL;

	return newnode;
}

//初始化
LTNode* LTInit() {
	LTNode* phead = CreateLTNode(-1);
	phead->next = phead;
	phead->prev = phead;

	return phead;
}

//打印
void LTPrint(LTNode* phead) {
	assert(phead);//这里哨兵节点不能为空

	LTNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d<=>", cur->val);
		cur = cur->next;
	}
}

//尾插
void LTPushBack(LTNode* phead, LTDataType x) {
	assert(phead);

	LTNode* tail = phead->prev;
	LTNode* newnode = CreateLTNode(x);

	// phead    tail newnode
	
	phead->prev = newnode;
	
	newnode->prev = tail;
	newnode->next = phead;

    tail->next = newnode;

	//LTInsert(phead, x);//当pos为phead时,直接在phead前面插入
}

//尾删
void LTPopBack(LTNode* phead) {
	assert(phead);
	assert(phead->next != phead);

	LTNode* tail = phead->prev;
	LTNode* tailPrev = tail->prev;//变量小驼峰

	free(tail);
	tailPrev->next = phead;
	phead->prev = tailPrev;

	//LTErase(phead->prev);//当pos为phead时, 直接删除phead前一个
}

//头插
void LTPushFront(LTNode* phead, LTDataType x) {
	assert(phead);

	LTNode* newnode = CreateLTNode(x);

	//1.第一种
	//newnode->next = phead->next;//需要考虑先后顺序
	//phead->next->prev = newnode;//不能先phead

	//phead->next = newnode;
	//newnode->prev = phead;
	
	//2.第二种 定义指针first
	LTNode* first = phead->next;

	phead->next = newnode;

	newnode->prev = phead;
	newnode->next = first;

	first->prev = newnode;

	//LTInsert(phead->next, x); //当pos为phead时, 直接在phead后面插入
}

//头删
void LTPopFront(LTNode* phead) {
	assert(phead);
	//当是空链表的时候
	assert(phead->next != phead);

	LTNode* first = phead->next;
	LTNode* second = first->next;

	phead->next = second;
	second->prev = phead;

	free(first);
	first = NULL;

	//LTErase(phead->next);//当pos为phead时, 直接删除第一个节点
}

//查找
LTNode* LTFind(LTNode* phead, LTDataType x) {
	assert(phead);
	
	LTNode* cur = phead->next;
	
	while (cur != phead)
	{
		if (cur->val == x)//这里少写了一个=
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

//在pos前面插入
void LTInsert(LTNode* pos, LTDataType x) {
	assert(pos);

	LTNode* posPrev = pos->prev;
	LTNode* newnode = CreateLTNode(x);

	//posPrev   newnode    pos
	posPrev->next = newnode;
	
	newnode->prev = posPrev;
	newnode->next = pos;

	pos->prev = newnode;
}

//删除pos
void LTErase(LTNode* pos) {
	assert(pos);

	LTNode* posPrev = pos->prev;
	LTNode* posNext = pos->next;

	posPrev->next = posNext;
	posNext->prev = posPrev;

	free(pos);
	pos = NULL;
}

//销毁
void LTDestory(LTNode* phead) {
	assert(phead);

	LTNode* cur = phead->next;

	while (cur != phead) {
		LTNode* next = cur->next;

		free(cur);

		cur = next;
	}

	free(phead);
}

