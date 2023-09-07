#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int deleteElement(int arr[], int size, int position) {
//    int deletedElement = arr[position]; // 保存要删除的元素
//    for (int i = position; i < size - 1; i++) {
//        arr[i] = arr[i + 1]; // 将后面的元素向前移动
//    }
//    return deletedElement;
//}
//
//int main() {
//    int arr[] = { 1, 2, 3, 4, 5 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//    int position = 2;
//
//    printf("删除前的数组：");
//    for (int i = 0; i < size; i++) {
//        printf("%d ", arr[i]);
//    }
//
//    int deletedElement = deleteElement(arr, size, position);
//    size--; // 更新数组大小
//
//    printf("\n删除的元素：%d\n", deletedElement);
//    printf("删除后的数组：");
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
            return i; // 找到元素x，返回下标i
        }
    }
    return -1; // 没有找到元素x，返回-1
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 3;

    int position = findElement(arr, size, x);

    if (position != -1) {
        printf("元素 %d 在数组中第一次出现的位置是：%d\n", x, position);
    }
    else {
        printf("元素 %d 在数组中未找到\n", x);
    }

    return 0;
}