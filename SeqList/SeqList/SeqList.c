#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"

//��ʼ��
void SLInit(SL* psl) {
	assert(psl);

	psl->a = NULL;
	psl->size = 0;
	psl->capacity = 0;
}

//����
void SLDestroy(SL* psl) {
	assert(psl);
	
	if (psl->a != NULL) {
		
		free(psl->a);

		psl->capacity = 0;
		psl->size = 0;
	}
}

//��ӡ
void SLPrint(SL* psl) {
	assert(psl);

	for (int i = 0; i < psl->size; i++)//ֻ����<size
	{
		printf("%d<=>", psl->a[i]);
	}
	printf("\n");
}

//���ռ��С
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

//β��
void SLPushBack(SL* psl, SLDataType x)
{
	assert(psl);

	SLCheckCapacity(psl);

	psl->a[psl->size] = x;
	psl->size++;
}

//βɾ
void SLPopBack(SL* psl)
{
	assert(psl);
	assert(psl->size > 0);

	psl->size--;//С��Ϊǰsize-1������Ч,�����ֱ���´ο��Ը���
}

//ͷ��
void SLPushFront(SL* psl, SLDataType x)
{
	assert(psl);

	SLCheckCapacity(psl);

	int end = psl->size - 1;//����ֻ�ܴӺ���ǰ

	while (end >= 0)
	{
		psl->a[end + 1] = psl->a[end];//���ﲻ�ܷ�����
		end--;
	}

	psl->a[0] = x;
	psl->size++;
}

//ͷɾ
void SLPopFront(SL* psl)
{
	assert(psl);
	assert(psl->size > 0);

	int begin = 1;
	while (begin < psl->size)
	{
		psl->a[begin - 1] = psl->a[begin];//�Ǳ��п�λ�����Ǳ���
		begin++;
	}

	psl->size--;
}

//��pos�±괦����Ԫ��
void SLInsert(SL* psl, int pos, SLDataType x)
{
	assert(psl);
	assert(pos >= 0 && pos <= psl->size);//pos���±�

	SLCheckCapacity(psl);

	//Ų������
	int end = psl->size - 1;
	while (end)
	{
		psl->a[end + 1] = psl->a[end];
		end--;
	}

	psl->a[pos] = x;
	psl->size++;
}

//ɾ���±�Ϊpos��Ԫ��
void SLErase(SL* psl, int pos)
{
	assert(psl);
	assert(pos >= 0 && pos <= psl->size - 1);

	//Ų������
	int begin = pos + 1;//�����±�Ϊpos�����Ԫ��
	while (psl->size > begin)//�������ж��ٸ�Ԫ��Ҫ��Ų�����±�û�й�ϵ
	{
		psl->a[begin - 1] = psl->a[begin];
		begin++;
	}
	psl->size--;
}