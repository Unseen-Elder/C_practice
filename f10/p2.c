#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;

    ptr=(int *)calloc(4,sizeof(int)); // initialize each element with zero in it;

    for(int i=0;i<4;i++)
    {
        printf("the value of element %d is : %d\n",i+1,ptr[i]);
    }

    return 0;
}