#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;
};

// function to add list in a double linked list
void addList(struct node *head,struct node *newNode,int data){
    newNode->data = data;
    // if list is empty
    if(head->next == NULL){
        head->next = newNode;
        newNode->prev = head;
    }else{
        struct node *temp = head->next;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
        
        
    }
    newNode->next = NULL; // new node is the last node in the list
    printf("Hello there %d\n",newNode->prev->data);
}

// a functio to display teh length together with the elements
void displayList(struct node *head){
    struct node *temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        printf("Data at %d position: %d\n",count,temp->data);
        temp = temp->next;
        
    }
}

int main(){
    struct node *head= malloc(sizeof(struct node));
    head->prev = NULL;
    head->next = NULL;
    head->data = 10;
    struct node *first=malloc(sizeof(struct node));
    addList(head,first,21);

    displayList(head);

    
    


    return 0;
}