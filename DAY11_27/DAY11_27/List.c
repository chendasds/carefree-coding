#define _CRT_SECURE_NO_WARNINGS
#include"List.h"

//����ռ�
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

//��ʼ��
LTNode* LTInit() {
	LTNode* phead = CreateLTNode(-1);
	phead->next = phead;
	phead->prev = phead;

	return phead;
}

//��ӡ
void LTPrint(LTNode* phead) {
	assert(phead);//�����ڱ��ڵ㲻��Ϊ��

	LTNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d<=>", cur->val);
		cur = cur->next;
	}
}

//β��
void LTPushBack(LTNode* phead, LTDataType x) {
	assert(phead);

	LTNode* tail = phead->prev;
	LTNode* newnode = CreateLTNode(x);

	// phead    tail newnode
	
	phead->prev = newnode;
	
	newnode->prev = tail;
	newnode->next = phead;

    tail->next = newnode;

	//LTInsert(phead, x);//��posΪpheadʱ,ֱ����pheadǰ�����
}

//βɾ
void LTPopBack(LTNode* phead) {
	assert(phead);
	assert(phead->next != phead);

	LTNode* tail = phead->prev;
	LTNode* tailPrev = tail->prev;//����С�շ�

	free(tail);
	tailPrev->next = phead;
	phead->prev = tailPrev;

	//LTErase(phead->prev);//��posΪpheadʱ, ֱ��ɾ��pheadǰһ��
}

//ͷ��
void LTPushFront(LTNode* phead, LTDataType x) {
	assert(phead);

	LTNode* newnode = CreateLTNode(x);

	//1.��һ��
	//newnode->next = phead->next;//��Ҫ�����Ⱥ�˳��
	//phead->next->prev = newnode;//������phead

	//phead->next = newnode;
	//newnode->prev = phead;
	
	//2.�ڶ��� ����ָ��first
	LTNode* first = phead->next;

	phead->next = newnode;

	newnode->prev = phead;
	newnode->next = first;

	first->prev = newnode;

	//LTInsert(phead->next, x); //��posΪpheadʱ, ֱ����phead�������
}

//ͷɾ
void LTPopFront(LTNode* phead) {
	assert(phead);
	//���ǿ������ʱ��
	assert(phead->next != phead);

	LTNode* first = phead->next;
	LTNode* second = first->next;

	phead->next = second;
	second->prev = phead;

	free(first);
	first = NULL;

	//LTErase(phead->next);//��posΪpheadʱ, ֱ��ɾ����һ���ڵ�
}

//����
LTNode* LTFind(LTNode* phead, LTDataType x) {
	assert(phead);
	
	LTNode* cur = phead->next;
	
	while (cur != phead)
	{
		if (cur->val == x)//������д��һ��=
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

//��posǰ�����
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

//ɾ��pos
void LTErase(LTNode* pos) {
	assert(pos);

	LTNode* posPrev = pos->prev;
	LTNode* posNext = pos->next;

	posPrev->next = posNext;
	posNext->prev = posPrev;

	free(pos);
	pos = NULL;
}

//����
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

