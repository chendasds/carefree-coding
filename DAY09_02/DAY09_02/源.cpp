#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main() 
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//ʹ��ָ������ӡ��������
//	int* p = arr;
//	int i = 0;
//	//arr = p
//	//arr+i = p+i
//	//arr[i]ֻ��һ����ʽ����
//	//*(arr+i) = *(p+i) = arr[i]=i[arr]
//	//*(arr+i) = arr[i]
//	//*(i+arr) = i[arr]
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", *(p + i));
//		printf("%d ", i[arr]);
//		//pָ������������Ԫ�ص�ַ
//		//p+i ���������±�Ϊi��Ԫ�صĵ�ַ
//		//p+i ��ʼʱ������i*sizeof(int)���ֽ�
//		//ָ�����͵���;
//	}
//	return 0;
//}

//����ָ������ӡ��������
//int main()
//{
//	short arr[] = { 0*11223344,0*22114433,3,4,5,6,7,8,9,10 };
//	int* p = (int*)arr;
//	for (int i = 0; i < 10; i++)
//	{
//		//printf("%d ", *(p + i));
//		*p = 0;
//		*p++;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    //��������ɴ���
//    // ��������Ϊ�����д洢��Ԫ��������int���͵ģ����ֻҪ��һ��int��ָ�룬����ȡ���������е�ÿ��Ԫ�ؼ���
//    int* p = arr;  // ����������������Ԫ�صĵ�ַ
//    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
//    {
//        printf("%d ", *p);   // *p: ȡ��p��ָ��λ�õ�Ԫ��
//        ++p;                 // ��ȡp����һ��λ��
//    return 0;
//}
//int main() {
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	printf("%d ", sizeof(arr));
//	printf("%d ", sizeof(arr[0]));
//	printf("%d ", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}
//
//int main() {
//	char arr[] = "Im a student";
//	char* p = arr;
//	for (int i = 0; i < 12; i++)
//	{
//		printf("%s", arr);
//		*p++;
//	}
//	return 0;
//
//}

//int main() {
//	int a = 0x11223344;
//	char* p = (char*) & a;
//	*p = 0;//�����ò�����,��ӷ���
//	//a = 0;
//	return 0;
//}

//int main() {
//	int a = 0x11223344;
//	int* p = &a;
//	*p = 0;//�����ò�����,��ӷ���
//	//a = 0;
//	return 0;
//}

//int main() {
//	int a = 0;
//	int* pa = &a;
//	char* pc = (char*) & a;
//	printf("pa = %p\n", pa);
//	printf("pa + 1 = %p\n", pa + 1);
//	printf("pc + 1 = %x\n", pc + 1);
//	printf("pc = %p\n", pc);
//}
//int main()
//{
//	int a = 0x11223344;
//	char* p = (char*) & a;//int*
//	*p = 0;
//
//	//int* p =  &a;//int*
//	//*p = 0;
//
//	return 0;
//}
//int main() {
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = -1;
//		p++;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = {0x11223344,0x11223344,0x11223344,0x11223344,0x11223344,
//		           0x11223344,0x11223344,0x11223344,0x11223344,0x11223344 };
//	short* p =(short*) arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = 0;
//		p++;
//	}
//
//	return 0;
//}
//int main()
//{
//	int* p = (int*)0x11223344;
//	*p;
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = -1;
//		p++;
//	}
//
//	return 0;
//}
//int main() {
//	int arr[10] = { 1 };
//	int* pa = arr;
//	for (; pa <= &arr[10];)
//	{
//		*pa++ = 2;
//	}
//
//}
//#include <stdio.h>
//int main()
//{
//    int arr[10] = { 0 };
//    int* p = arr;
//    int i = 0;
//    for (i = 0; i <= 11; i++)
//    {
//        //��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//        *(p++) = i;
//    }
//    return 0;
//}
//int* test()
//{
//	int a = 10;//0x0012ff40
//	return &a;
//}
//
//
//int main()
//{
//	//0x0012ff40
//	int *p = test();
//	//p����Ұָ��
//	printf("%d\n", *p);//
//	return 0;
//}
//int main()
//{
//	int* p = NULL;
//	if (p != NULL)
//	{
//		//..
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//            0 1 2 3 4 5 6 7 8 9
//	//ʹ��ָ���ӡ���������
//	int * p = arr;
//	int i = 0;
//	//arr-->p
//	//arr == p
//	//arr+i  ==  p+i
//	//*(arr+i) == *(p+i) == arr[i]
//	//*(arr+i) == arr[i]
//	//*(i+arr) == i[arr]
//	//3+5
//	//5+3
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", *(p + i));
//		printf("%d ", *(arr + i));
//		//printf("%d ", arr[i]);
//		//printf("%d ", i[arr]);
//
//		//pָ�����������Ԫ��
//		//p+i ���������±�Ϊi��Ԫ�صĵ�ַ
//		//p+i ��ʼʱ������i*sizeof(int)���ֽ�
//	}
//	return 0;
//}
//#define N_VALUES 5
//int main() {
//
//
//float values[N_VALUES];
//float* vp;
////ָ��+-������ָ��Ĺ�ϵ����
//for (vp = &values[0]; vp < &values[N_VALUES];)
//{    *vp++ = 0;
//}
//}
//int main() {
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[10] - &arr[0]);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	//
//	//ָ��-ָ���ǰ�᣺����ָ��ָ��ͬһ������ָ������ʱ��ͬ��
//	//ָ��-ָ���ֵ�ľ���ֵ��ָ���ָ��֮���Ԫ�ظ���
//	//
//	printf("%d\n", &arr[9] - &arr[0]);
//	printf("%d\n", &arr[0] - &arr[9]);
//
//	return 0;
//}
//size_t my_strlen(char* str)
//{
//	char* start = str;
//	while (*str)
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zd\n", len);
//
//	return 0;
//}
//size_t my_strlen(char* str)
//{
//	char* start = str;
//	while (*str)
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	char arr[] = "adcd";
//	size_t len = my_strlen(arr);
//	printf("%zd\n", len);
//	return 0;
//}


////������ĳ���
//size_t my_strlen(char* str)
//{
//	char* start = str;
//	while (*str)
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main() {
//	char arr[] = "abcd";
//	size_t len = my_strlen(arr);
//	printf("%zu\n", len);
//	return 0;
//}
//int main() {
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//��ӡ�����׵�ַ
//	printf("%p\n", arr + 1);//int*�����ĸ��ֽ�
//
//	printf("%p\n", &arr[0]);//��ӡ�����׵�ַ
//	printf("%p\n", &arr[0] + 1);//�����ĸ��ֽ�
//
//	printf("%p\n", &arr);//ȡ������ĵ�ַ
//	printf("%p\n", &arr + 1);//��������������ֽ�
//
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//    int* p = arr; //ָ����������Ԫ�صĵ�ַ
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (int i = 0; i < sz; i++)
//    {
//        printf("&arr[%d] = %p   <====> p+%d = %p\n", i, &arr[i], i, p + i);
//    }
//    return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int* p = arr; //ָ����������Ԫ�صĵ�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(arr+i));
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p === %p\n", arr + i, p + i);
//	}*/
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p =  &a;//p��ָ�������һ��ָ�����
//	int* * pp = &p;//ppָ�����������ָ�����
//
//	**pp = 20;
//	printf("%d\n", a);//20
//
//	//int** * ppp = &pp;//pp��ָ�����������ָ�����
//	//...
//	return 0;
//}
int main()
{
	//ʹ��ָ�����飬ģ��һ����ά����
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };

	//ָ������
	int* arr[] = { arr1, arr2, arr3 };

	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}