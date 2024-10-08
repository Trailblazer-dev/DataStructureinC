#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
}*top=NULL;

int isEmpty(){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void push(int data){
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = data;
    newNode->link = top;
    top=newNode;
}

int pop(){
    struct node *remove= malloc(sizeof(struct node));
    remove = top;
    printf("%d is removed\n",remove->data);
    if(isEmpty()){
        printf("Stack is underflow\n");
        exit(1);
    }
    top= remove->link;
    free(remove);
    remove=NULL;
}

void print(){
    struct node *temp = top;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int peek(){
    return top->data;
}
int main(){
    push(23);
    printf("The node has %d\n", top->data);
    push(45);
    printf("The node has %d and  %d\n", top->data,top->link->data);
    push(21);
    print();
    pop();
    printf("The node has %d %d \n", top->data,top->link->data);
    printf("The top element is %d\n", peek());
    

    return 0;
}