#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int deleteElement(int arr[], int size, int position) {
//    int deletedElement = arr[position]; // ����Ҫɾ����Ԫ��
//    for (int i = position; i < size - 1; i++) {
//        arr[i] = arr[i + 1]; // �������Ԫ����ǰ�ƶ�
//    }
//    return deletedElement;
//}
//
//int main() {
//    int arr[] = { 1, 2, 3, 4, 5 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//    int position = 2;
//
//    printf("ɾ��ǰ�����飺");
//    for (int i = 0; i < size; i++) {
//        printf("%d ", arr[i]);
//    }
//
//    int deletedElement = deleteElement(arr, size, position);
//    size--; // ���������С
//
//    printf("\nɾ����Ԫ�أ�%d\n", deletedElement);
//    printf("ɾ��������飺");
//    for (int i = 0; i < size; i++) {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}
#include <stdio.h>

int findElement(int arr[], int size, int x) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            return i; // �ҵ�Ԫ��x�������±�i
        }
    }
    return -1; // û���ҵ�Ԫ��x������-1
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 3;

    int position = findElement(arr, size, x);

    if (position != -1) {
        printf("Ԫ�� %d �������е�һ�γ��ֵ�λ���ǣ�%d\n", x, position);
    }
    else {
        printf("Ԫ�� %d ��������δ�ҵ�\n", x);
    }

    return 0;
}