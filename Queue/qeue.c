#include<stdio.h>
#define SIZE 5

void enQueue(int);
void deQueue();
void displayQueue();

int items[SIZE];
int front = -1;
int rear = -1;


int main(){


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