#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"

//初始化
void SLInit(SL* psl) {
	assert(psl);

	psl->a = NULL;
	psl->size = 0;
	psl->capacity = 0;
}

//销毁
void SLDestroy(SL* psl) {
	assert(psl);
	
	if (psl->a != NULL) {
		
		free(psl->a);

		psl->capacity = 0;
		psl->size = 0;
	}
}

//打印
void SLPrint(SL* psl) {
	assert(psl);

	for (int i = 0; i < psl->size; i++)//只能是<size
	{
		printf("%d<=>", psl->a[i]);
	}
	printf("\n");
}

//检查空间大小
void SLCheckCapacity(SL* psl) {
	assert(psl);

	if (psl->size == psl->capacity)
	{
		int newCacacity = psl->capacity == 0 ? 4 : psl
			->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(psl->a, sizeof(SLDataType) * newCacacity);
		if (tmp == NULL)
		{
			perror("relloc fail");
			return;
		}

		psl->a = tmp;
		psl->capacity = newCacacity;
	}
}

//尾插
void SLPushBack(SL* psl, SLDataType x)
{
	assert(psl);

	SLCheckCapacity(psl);

	psl->a[psl->size] = x;
	psl->size++;
}

//尾删
void SLPopBack(SL* psl)
{
	assert(psl);
	assert(psl->size > 0);

	psl->size--;//小标为前size-1个数有效,后面的直接下次可以覆盖
}

//头插
void SLPushFront(SL* psl, SLDataType x)
{
	assert(psl);

	SLCheckCapacity(psl);

	int end = psl->size - 1;//这里只能从后往前

	while (end >= 0)
	{
		psl->a[end + 1] = psl->a[end];//这里不能反过来
		end--;
	}

	psl->a[0] = x;
	psl->size++;
}

//头删
void SLPopFront(SL* psl)
{
	assert(psl);
	assert(psl->size > 0);

	int begin = 1;
	while (begin < psl->size)
	{
		psl->a[begin - 1] = psl->a[begin];//那边有空位就网那边移
		begin++;
	}

	psl->size--;
}

//在pos下标处插入元素
void SLInsert(SL* psl, int pos, SLDataType x)
{
	assert(psl);
	assert(pos >= 0 && pos <= psl->size);//pos是下标

	SLCheckCapacity(psl);

	//挪动数据
	int end = psl->size - 1;
	while (end)
	{
		psl->a[end + 1] = psl->a[end];
		end--;
	}

	psl->a[pos] = x;
	psl->size++;
}

//删除下标为pos的元素
void SLErase(SL* psl, int pos)
{
	assert(psl);
	assert(pos >= 0 && pos <= psl->size - 1);

	//挪动覆盖
	int begin = pos + 1;//即是下标为pos的这个元素
	while (psl->size > begin)//这里是有多少个元素要被挪动与下标没有关系
	{
		psl->a[begin - 1] = psl->a[begin];
		begin++;
	}
	psl->size--;
}