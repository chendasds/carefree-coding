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

int main() {
	int a = 0x11223344;
	char* p = (char*) & a;
	*p = 0;//�����ò�����,��ӷ���
	//a = 0;
	return 0;
}
