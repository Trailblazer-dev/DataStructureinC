#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

// A function to add node to the single linked list

void LinkedNode(struct node *prevNode,struct node *newNode,int data){
    newNode = malloc(sizeof(struct node));
    newNode->data = data;
    prevNode->link = newNode;
}

// a fucntion to calculate the length of a single linked list

void count_of_nodes(struct node *head){
    int count=0;
    if(head==NULL){
        printf("Linked list is empty");
    }
    struct  node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL){
        count++;
        // we can also the data it has
        printf("Data for node %d is: %d\n",count,ptr->data);
        ptr=ptr->link;
    }
    printf("Number of nodes: %d\n",count);
       
}
int main(){
    struct node *head= malloc(sizeof(struct node));
    head->data = 100;
    head->link = NULL;
    printf("link %p\n", head->link);

// adding a node manually

    struct  node *second = malloc(sizeof(struct node));
    second->data = 200;
    second->link = NULL;
    head->link = second;
    printf("link %d\n", head->link->data);

    struct node *third = malloc(sizeof(struct node));
    third->data = 300;
    third->link = NULL;
    second->link = third;
    printf("link %d\n", head->link->link->data);

// Adding a node using the function

    struct node *fourth = malloc(sizeof(struct node));
    LinkedNode(third,fourth,400);
    printf("link %d\n", head->link->link->link->data);

// calling the function for calculating the length of the linked list

    count_of_nodes(head);

    // let add a node at the beginning to the list
    struct node *start= malloc(sizeof(struct node));
    start->data = 500;
    start->link = head;
    head = start;
    printf("\n\n\n--------------- Start ---------------\n\n");
    count_of_nodes(head);

    // let add at he beginning of the list

    struct node *middle= malloc(sizeof(struct node));
    middle->data=129;
    second->link=middle;
    middle->link=third;

    printf("\n\n\n--------------- Middle ---------------\n\n");
    count_of_nodes(head);

    {
        /* data */
    };
    



// Note: This code creates a simple singly linked list and does not include error handling for null pointers, etc.
   
    
    return 0;
}