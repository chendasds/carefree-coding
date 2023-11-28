#define _CRT_SECURE_NO_WARNINGS
#include"List.h"

void test() {
	LTNode* plist = LTInit();//初始化

	LTPushBack(plist, 1);//尾插
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);

	LTPushFront(plist, 20);//头插
	//LTPushFront(plist, 30);

	//LTPopFront(plist);//头删
	//LTPopFront(plist);

	//LTPopBack(plist);//尾删
	//LTPopBack(plist);

	//LTNode* pos = LTFind(plist, 20);

	//if (pos) {
	//	pos->val *= 10;//直接在查找的时候修改值
	//}

	//LTInsert(pos, 3000);//在pos位置前面插入

	//LTErase(pos);//删除pos

	LTPrint(plist);//打印结果
}

int main() {
	test();
}