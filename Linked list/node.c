#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
int main(){
    struct node *head=NULL;
    head = malloc(sizeof(struct node));
    head->data = 100;
    printf("These is the memory address of the node %p\n",head);
    printf("This is the value of the data in the node %d\n",head->data);
    printf("What does this contain %p\n",head->link);
    return 0;
}