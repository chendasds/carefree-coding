#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�Ӽ��˳������Ķ���
 //�ӷ�
//int Add(int x, int y) 
//{
//	return x + y;
//}
////����
//int Sub(int x, int y)
//{
//	return x - y;
//}
////�˷�
//int Mul(int x, int y)
//{
//	return x * y;
//}
////����
//int Div(int x, int y)
//{
//	return x / y;
//}
////����˵���
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
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("���������������:");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//				printf("ret=%d\n", ret);
//			break;
//		case 2:
//			printf("���������������:");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 3:
//			printf("���������������:");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 4:
//			printf("���������������:");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		//����ָ������ - ת�Ʊ�
//		int (*pfArr[])(int, int) = {NULL, Add, Sub, Mul, Div};
//		//                          0     1     2   3    4
//		if (0 == input)
//		{
//			printf("�˳�������\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("������2��������:");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else
//		{
//			printf("ѡ���������ѡ��!\n");
//		}
//	} while (input);
//
//	return 0;
//}
//int main()
//{
//	//ģʽ��ѡ��
//	int input = 0;
//	//�����������
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d %d", &input);
//		//����ָ������ - ת�Ʊ�
//		int(*pfArr[])(int, int) = {NULL, Add, Sub, Mul, Div};
//			         //��Ϊֻ��ֻ�������˺���ָ�������,����ʹ�ò���int���治�Ӳ���
//		if (0 == input)
//		{
//			printf("�˳������\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("������2��������: ");
//			scanf("%d %d", &x, &y);
//			ret = (*pfArr[input])(x, y);
//			printf("ret = %d\n", ret);
//		}
//		else
//		{
//			printf("ѡ���������ѡ��!\n");
//		}
//	} while (input != 0);
//		return 0;
//}
//void calc(int (*pf)(int,int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("������2��������:");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);   //��Add�ĵ�ַ����calc����������
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
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����, ����ѡ��\n");
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
//	//����
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ��ð������Ĺ���
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
//	//����
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	bubble_sort(arr, sz);//ð������
//	print_arr(arr, sz);
//	return 0;
//}



