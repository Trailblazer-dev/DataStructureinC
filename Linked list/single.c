#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

int main(){
    struct node *head= malloc(sizeof(struct node));
    head->data = 100;
    head->link = NULL;
    printf("link %p\n", head->link);

    struct  node *second = malloc(sizeof(struct node));
    second->data = 200;
    second->link = NULL;
    head->link = second;
    printf("link %d\n", head->link->data);
    {
        /* data */
    };
    
    return 0;
}