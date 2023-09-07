#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//加减乘除函数的定义
 //加法
//int Add(int x, int y) 
//{
//	return x + y;
//}
////减法
//int Sub(int x, int y)
//{
//	return x - y;
//}
////乘法
//int Mul(int x, int y)
//{
//	return x * y;
//}
////除法
//int Div(int x, int y)
//{
//	return x / y;
//}
////定义菜单栏
//void menu()
//{
//	printf("****************************\n");
//	printf("***  1. add      2. sub  ***\n");
//	printf("***  3. mul      4. div  ***\n");
//	printf("***  0. exit             ***\n");
//	printf("****************************\n");
//}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输出两个操作数:");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//				printf("ret=%d\n", ret);
//			break;
//		case 2:
//			printf("请输出两个操作数:");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 3:
//			printf("请输出两个操作数:");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 4:
//			printf("请输出两个操作数:");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		//函数指针数组 - 转移表
//		int (*pfArr[])(int, int) = {NULL, Add, Sub, Mul, Div};
//		//                          0     1     2   3    4
//		if (0 == input)
//		{
//			printf("退出计算器\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入2个操作数:");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else
//		{
//			printf("选择错误，重新选择!\n");
//		}
//	} while (input);
//
//	return 0;
//}
//int main()
//{
//	//模式的选择
//	int input = 0;
//	//输入的两个数
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d %d", &input);
//		//函数指针数组 - 转移表
//		int(*pfArr[])(int, int) = {NULL, Add, Sub, Mul, Div};
//			         //因为只是只是声明了函数指针的类型,并不使用参数int后面不加参数
//		if (0 == input)
//		{
//			printf("退出计算机\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入2个操作数: ");
//			scanf("%d %d", &x, &y);
//			ret = (*pfArr[input])(x, y);
//			printf("ret = %d\n", ret);
//		}
//		else
//		{
//			printf("选择错误，重新选择!\n");
//		}
//	} while (input != 0);
//		return 0;
//}
//void calc(int (*pf)(int,int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入2个操作数:");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("ret = %d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);   //把Add的地址传到calc函数参数中
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误, 重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//void print_arr(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void bubble_sort(int arr[], int sz)
//{
//	//趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	//数据
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	bubble_sort(arr, sz);//冒泡排序
//	print_arr(arr, sz);
//	return 0;
//}



