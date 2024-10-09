#include<stdio.h>
int main(){
    int list[5]={0,1,2,3,4};
    int length= sizeof(list)/sizeof(list[0]);
    printf("Length of the array is %d\n",length);
}