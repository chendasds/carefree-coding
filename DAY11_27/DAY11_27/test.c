#define _CRT_SECURE_NO_WARNINGS
#include"List.h"

void test() {
	LTNode* plist = LTInit();//��ʼ��

	LTPushBack(plist, 1);//β��
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);

	LTPushFront(plist, 20);//ͷ��
	//LTPushFront(plist, 30);

	//LTPopFront(plist);//ͷɾ
	//LTPopFront(plist);

	//LTPopBack(plist);//βɾ
	//LTPopBack(plist);

	//LTNode* pos = LTFind(plist, 20);

	//if (pos) {
	//	pos->val *= 10;//ֱ���ڲ��ҵ�ʱ���޸�ֵ
	//}

	//LTInsert(pos, 3000);//��posλ��ǰ�����

	//LTErase(pos);//ɾ��pos

	LTPrint(plist);//��ӡ���
}

int main() {
	test();
}