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

int main() {
	int a = 0x11223344;
	char* p = (char*) & a;
	*p = 0;//解引用操作符,间接访问
	//a = 0;
	return 0;
}
