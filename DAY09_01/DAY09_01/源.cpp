#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 定义链表节点结构体
struct ListNode {
    int val;
    struct ListNode* next;
};

// 插入元素
void insertNode(struct ListNode** head, int val) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    }
    else {
        struct ListNode* cur = *head;
        while (cur->next != NULL) {
            cur = cur->next;
        }
        cur->next = newNode;
    }
}

// 删除元素
void deleteNode(struct ListNode** head, int val) {
    struct ListNode* cur = *head;
    struct ListNode* prev = NULL;

    while (cur != NULL && cur->val != val) {
        prev = cur;
        cur = cur->next;
    }

    if (cur != NULL) {
        if (prev == NULL) {
            *head = cur->next;
        }
        else {
            prev->next = cur->next;
        }
        free(cur);
    }
}

// 获取第i个结点的数据元素
int getElem(struct ListNode* head, int index) {
    struct ListNode* cur = head;
    int count = 0;

    while (cur != NULL && count < index) {
        cur = cur->next;
        count++;
    }

    if (cur != NULL) {
        return cur->val;
    }

    // 如果未找到第i个节点，返回一个特定的错误码或抛出异常
    // 这里简单返回-1表示未找到
    return -1;
}

// 判断元素是否存在
int isExist(struct ListNode* head, int val) {
    struct ListNode* cur = head;

    while (cur != NULL) {
        if (cur->val == val) {
            return 1;
        }
        cur = cur->next;
    }

    return 0;
}

// 获取某个元素的下一个元素
int nextElem(struct ListNode* head, int cur_e, int* next_e) {
    struct ListNode* cur = head;

    while (cur != NULL && cur->val != cur_e) {
        cur = cur->next;
    }

    if (cur != NULL && cur->next != NULL) {
        *next_e = cur->next->val;
        return 1;
    }

    return 0;
}

// 打印链表
void printList(struct ListNode* head) {
    struct ListNode* cur = head;

    while (cur != NULL) {
        printf("%d ", cur->val);
        cur = cur->next;
    }

    printf("\n");
}

// 清空链表
void clearList(struct ListNode** head) {
    struct ListNode* cur = *head;

    while (cur != NULL) {
        struct ListNode* temp = cur;
        cur = cur->next;
        free(temp);
    }

    *head = NULL;
}

int main() {
    struct ListNode* head = NULL;

    // 插入元素
    insertNode(&head, 10);
    insertNode(&head, 20);
    insertNode(&head, 30);

    // 打印链表
    printList(head);

    // 删除元素
    deleteNode(&head, 20);

    // 打印链表
    printList(head);

    // 获取第i个结点的数据元素
    int elem = getElem(head, 1);
    printf("第1个结点的数据元素为：%d\n", elem);

    // 判断元素是否存在
    int exist = isExist(head, 20);
    printf("元素20是否存在：%s\n", exist ? "是" : "否");

    // 获取某个元素的下一个元素
    int nextElemValue;
    int hasNext = nextElem(head, 10, &nextElemValue);
    if (hasNext) {
        printf("元素10的下一个元素为：%d\n", nextElemValue);
    }
    else {
        printf("元素10是最后一个元素，无下一个元素\n");
    }

    // 清空链表
    clearList(&head);

    return 0;
}