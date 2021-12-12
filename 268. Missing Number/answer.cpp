#include<assert.h>
#include<stdio.h>
#include<stdlib.h>

struct listnode{
    int data;
    struct listnode *next;
};
typedef struct listnode ListNode; //簡潔定義

int printLinkedList(ListNode *head){
    int temp = head->data;
    int zero = 0;
    head = head->next;
    if(temp == 0) zero++;
    for(; head != NULL; temp = head->data, head = head->next){
        if(temp == 0 || head->data == 0) zero++;
        if(temp != (head->data)-1)
            return temp+1;
    }
    if(zero == 0) return 0;
    return temp+1;
}

ListNode *insertLinkedList(ListNode *head, int data){
    ListNode *current = (ListNode *)malloc(sizeof(ListNode));
    ListNode *ptr;
    ListNode *last;
    assert(current != NULL);
    current->data = data;
    if(head == NULL){
        current->next = NULL;
        return(current);
    }
    last = NULL;
    ptr = head;
    while(ptr != NULL && ptr->data < data){
        last = ptr;
        ptr = ptr->next;
    }
    if(last == NULL){
        current->next = head;
        return(current);
    }
    else{
        current->next = last->next;
        last->next = current;
        return(head);
    }
}

int missingNumber(int* nums, int numsSize){
    int i, j;
    ListNode *head = NULL;
    for(i = 0; i < numsSize; i++){ 
        head = insertLinkedList(head, nums[i]);
    }
    return printLinkedList(head);
    
}
