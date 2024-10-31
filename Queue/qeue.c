#include<stdio.h>
#define SIZE 5

void enQueue(int);
void deQueue();
void displayQueue();

int items[SIZE];
int front = -1;
int rear = -1;


int main(){
    //deQueue is not possible on empty queue
    deQueue();
    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    enQueue(60);
    displayQueue();
    deQueue();
    displayQueue();


    return 0;
}



void enQueue(int value){
    if(rear == SIZE-1){
        printf("Queue is full. Cannot enqueue %d\n", value);
        return;
    }
    else{
        if(front == -1){
            front = 0;
        }
        rear = rear + 1;
        items[rear] = value;
        printf("%d enqueued to queue\n", value);
    }
}


void deQueue(){
    if(front == -1){
        printf("Queue is empty. Cannot dequeue\n");
        return;
    }
    else{
        printf("%d dequeued from queue\n", items[front]);
        front = front + 1;
        if(front > rear){
            front = rear = -1;
        }
    }
}


void displayQueue(){
    if(rear == -1){
        printf("Queue is empty\n");
        return;
    }
    else{
        printf("Queue elements are:\n");
        for(int i = front; i <= rear; i++){
            printf("%d ", items[i]);
        }
        printf("\n");
    }
}