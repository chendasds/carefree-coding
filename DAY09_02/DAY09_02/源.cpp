#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main() 
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//使用指针来打印数组内容
//	int* p = arr;
//	int i = 0;
//	//arr = p
//	//arr+i = p+i
//	//arr[i]只是一种形式而已
//	//*(arr+i) = *(p+i) = arr[i]=i[arr]
//	//*(arr+i) = arr[i]
//	//*(i+arr) = i[arr]
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", *(p + i));
//		printf("%d ", i[arr]);
//		//p指向的是数组的首元素地址
//		//p+i 是数组中下标为i的元素的地址
//		//p+i 起始时跳过了i*sizeof(int)个字节
//		//指针类型的用途
//	}
//	return 0;
//}

//利用指针来打印数组内容
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
//    //在这里完成代码
//    // 分析：因为数组中存储的元素类型是int类型的，因此只要给一个int的指针，依次取索引数组中的每个元素即可
//    int* p = arr;  // 数组名代表数组首元素的地址
//    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
//    {
//        printf("%d ", *p);   // *p: 取到p所指向位置的元素
//        ++p;                 // 获取p的下一个位置
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
//	*p = 0;//解引用操作符,间接访问
//	//a = 0;
//	return 0;
//}

//int main() {
//	int a = 0x11223344;
//	int* p = &a;
//	*p = 0;//解引用操作符,间接访问
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
//        //当指针指向的范围超出数组arr的范围时，p就是野指针
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
//	//p就是野指针
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
//	//使用指针打印数组的内容
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
//		//p指向的是数组首元素
//		//p+i 是数组中下标为i的元素的地址
//		//p+i 起始时跳过了i*sizeof(int)个字节
//	}
//	return 0;
//}
//#define N_VALUES 5
//int main() {
//
//
//float values[N_VALUES];
//float* vp;
////指针+-整数；指针的关系运算
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
//	//指针-指针的前提：两个指针指向同一块区域，指针类型时相同的
//	//指针-指针差值的绝对值，指针和指针之间的元素个数
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


////求数组的长度
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
//	printf("%p\n", arr);//打印数组首地址
//	printf("%p\n", arr + 1);//int*跳过四个字节
//
//	printf("%p\n", &arr[0]);//打印数组首地址
//	printf("%p\n", &arr[0] + 1);//跳过四个字节
//
//	printf("%p\n", &arr);//取出数组的地址
//	printf("%p\n", &arr + 1);//跳过整个数组的字节
//
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//    int* p = arr; //指针存放数组首元素的地址
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
//	int* p = arr; //指针存放数组首元素的地址
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
//	int* p =  &a;//p是指针变量，一级指针变量
//	int* * pp = &p;//pp指针变量，二级指针变量
//
//	**pp = 20;
//	printf("%d\n", a);//20
//
//	//int** * ppp = &pp;//pp是指针变量，三级指针变量
//	//...
//	return 0;
//}
int main()
{
	//使用指针数组，模拟一个二维数组
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };

	//指针数组
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