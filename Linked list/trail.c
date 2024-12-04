#include<stdio.h>
#include<stdlib.h>
 
struct Node{
    int data;
    struct Node* next;
};
int  main(){

    struct Node* head=malloc(sizeof(struct Node));
    head->data=12;
    struct Node* second=malloc(sizeof(struct Node));
    second->data=15;
    head->next=second;
    printf("head is %d\n",head->data);
    // printf("next is %d\n",head->next);
    printf("which is %d\n",head->next->data);
    struct Node* third= malloc(sizeof(struct Node));


    return 0;
}