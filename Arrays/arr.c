#include<stdio.h>
int main(){
    //Array declaration
    int rollNO[10];
    //array initialization
    for(int i=0;i<10;i++){
        printf("Enter a random number \n");
        scanf("%d",&rollNO[i]);
    }
    //array content
    for(int i=0;i<10;i++){
        printf("Roll No: %d\n",rollNO[i]);
    }
    return 0;
}