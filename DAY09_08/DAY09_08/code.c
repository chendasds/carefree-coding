#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
//int main()
//{
//	char c = 'w';
//
//	char* pc = &c;
//
//	int a = 100;
//	//int* p = &c;
//	//       char*
//	void* pv = &c;//char*
//	pv = &a;//int*
//
//	return 0;
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void qsort(void* base, //����������ĵ�һ��Ԫ�صĵ�ַ
//	       size_t num, //�����������Ԫ�ظ���
//	       size_t size,//������������һ��Ԫ�صĴ�С
//	       int (* cmp)(const void* e1, const void* e2)//����ָ��-cmpָ����һ����������������������Ƚ�����Ԫ�ص�
//         //e1��e2�д�ŵ�����Ҫ�Ƚϵ�����Ԫ�صĵ�ַ
//          );
//1. ������������, �������Ϳ���ֱ��ʹ��>�Ƚ�
//2. ����ṹ�����飬�����ṹ������ݿ��ܲ���ֱ��ʹ��>�Ƚ�
 //Ҳ���ǲ�ͬ���͵����ݣ��Ƚϳ���С���������в����


//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
////����qsort������������
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//
////����qsort����ṹ������
//struct Stu
//{
//	char name[20];
//	int age;
//};
//�ṹ��������ô�Ƚ��أ�
//1. ��������Ƚ�
//2. �������ֱȽ�

//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//void test2()
//{
//	struct Stu arr[] = { {"zhanhsan", 20}, {"lisi", 30}, {"wangwu", 12} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//}
//
////2. �������ֱȽ�
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test3()
//{
//	struct Stu arr[] = { {"zhanhsan", 20}, {"lisi", 30}, {"wangwu", 12} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//}
//
//int main()
//{
//	//����
//	test1();
//	test2();
//	test3();
//	return 0;
//}
//#include <stdio.h>
//int int_cmp(const void* p1, const void* p2)
//{
//    return (*(int*)p1 - *(int*)p2);
//}
//void _swap(void* p1, void* p2, int size)
//{
//    int i = 0;
//    for (i = 0; i < size; i++)
//    {
//        char tmp = *((char*)p1 + i);
//        *((char*)p1 + i) = *((char*)p2 + i);
//        *((char*)p2 + i) = tmp;
//    }
//}
//void bubble(void* base, int count, int size, int(*cmp)(void*, void*))
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < count - 1; i++)
//    {
//        for (j = 0; j < count - i - 1; j++)
//        {
//            if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
//            {
//                _swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
//            }
//        }
//    }
//}
//int main()
//{
//    int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//    //char *arr[] = {"aaaa","dddd","cccc","bbbb"};
//    int i = 0;
//    bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//#include <stdlib.h>
//#include <string.h>

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

//����qsort������������
void test1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, sz);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}

//����qsort����ṹ������
struct Stu
{
	char name[20];
	int age;
};
//�ṹ��������ô�Ƚ��أ�
//1. ��������Ƚ�
//2. �������ֱȽ�

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

void test2()
{
	struct Stu arr[] = { {"zhanhsan", 20}, {"lisi", 30}, {"wangwu", 12} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
}

//2. �������ֱȽ�

int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test3()
{
	struct Stu arr[] = { {"zhanhsan", 20}, {"lisi", 30}, {"wangwu", 12} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
}

int main()
{
	//����
	//test1();
	//test2();
	test3();
	return 0;
}