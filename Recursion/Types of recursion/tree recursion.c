#include<stdio.h>
int fibonacci(int);
int main(){
    int n,f;
    n=12;
    f=fibonacci(n);
    printf("%d",f);
}
int fibonacci(int n){
    if(n==0){
        return 0;//base case
    }
    else if(n==1){
        return 1;    //base case
}
else{
    return fibonacci(n-1) + fibonacci(n-2);//recursive case
    
}
}
//output 144

// A tre recursion make mulitple recursive calls