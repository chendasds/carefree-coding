#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret = scanf("%d %d", &a, &b);
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	printf("ret=%d\n", ret);
//	return 0;
//
//}
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	b = ++a;
//	printf("%d,%d", a, b);
//	return 0;
//}
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	b = a++;
	printf("%d,%d", a, b);
	return 0;
}