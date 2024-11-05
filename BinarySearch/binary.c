#include <stdio.h>
#include <math.h>

int search(int a[], int data, int left, int right)
{
    int mid = floor((right + left) / 2);
    printf("mid : %d\n",mid);
        if (data == a[mid])
        {
            printf("found element\n");
            return mid;
        }
        else if (data < a[mid])
        {
            right = mid - 1;
            return search(a,59,left,right);
        }
        else
        {
            left = mid + 1;
            return search(a,59,left,right);
        }
    
    
        printf("Element not found\n");
        return 1;
}

int main()
{

    int elements[] = {5, 9, 17, 23, 25, 45, 59, 63, 71, 89};

    int l = 0;
    int size=sizeof(elements) / sizeof(elements[0]);
    int r = size-1;

    

    int result= search(elements, 59, l, r);
    printf("The middle is : %d\n",result);
    printf("which is:%d\n",elements[result]);
    return 0;
}
