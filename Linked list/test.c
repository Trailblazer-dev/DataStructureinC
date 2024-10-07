#include<stdio.h>
#include<stdlib.h>
// singly linked list
struct  sPerson{
    int age;
};
struct sPerson *getNewPerson(const int age){
    struct sPerson *newPerson=NULL;
    newPerson = malloc(sizeof(struct sPerson));
    newPerson->age=age;
    printf("Created new person at %p\n",newPerson);
    printf("With age %d\n",newPerson->age);
    {
        /* data */
    };
    return newPerson;
    
}


int  main(){
int age =20;
getNewPerson(age);

    return 0;
}
