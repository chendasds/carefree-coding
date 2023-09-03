#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// ��������ڵ�ṹ��
struct ListNode {
    int val;
    struct ListNode* next;
};

// ����Ԫ��
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

// ɾ��Ԫ��
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

// ��ȡ��i����������Ԫ��
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

    // ���δ�ҵ���i���ڵ㣬����һ���ض��Ĵ�������׳��쳣
    // ����򵥷���-1��ʾδ�ҵ�
    return -1;
}

// �ж�Ԫ���Ƿ����
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

// ��ȡĳ��Ԫ�ص���һ��Ԫ��
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

// ��ӡ����
void printList(struct ListNode* head) {
    struct ListNode* cur = head;

    while (cur != NULL) {
        printf("%d ", cur->val);
        cur = cur->next;
    }

    printf("\n");
}

// �������
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

    // ����Ԫ��
    insertNode(&head, 10);
    insertNode(&head, 20);
    insertNode(&head, 30);

    // ��ӡ����
    printList(head);

    // ɾ��Ԫ��
    deleteNode(&head, 20);

    // ��ӡ����
    printList(head);

    // ��ȡ��i����������Ԫ��
    int elem = getElem(head, 1);
    printf("��1����������Ԫ��Ϊ��%d\n", elem);

    // �ж�Ԫ���Ƿ����
    int exist = isExist(head, 20);
    printf("Ԫ��20�Ƿ���ڣ�%s\n", exist ? "��" : "��");

    // ��ȡĳ��Ԫ�ص���һ��Ԫ��
    int nextElemValue;
    int hasNext = nextElem(head, 10, &nextElemValue);
    if (hasNext) {
        printf("Ԫ��10����һ��Ԫ��Ϊ��%d\n", nextElemValue);
    }
    else {
        printf("Ԫ��10�����һ��Ԫ�أ�����һ��Ԫ��\n");
    }

    // �������
    clearList(&head);

    return 0;
}