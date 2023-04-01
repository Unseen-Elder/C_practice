#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;

    ptr=(int*)malloc(5*sizeof(int));

    for(int i=0;i<5;i++)
    {
        printf("Entre the value of element %d :\n",i+1);
        scanf("%d",&ptr[i]);
    }

   ptr=(int*)realloc(ptr,10 * sizeof(int));

   for(int i=5;i<10;i++)
    {
        printf("Entre the value of element %d :\n",i+1);
        scanf("%d",&ptr[i]);
    } 

    for(int i=0;i<10;i++)
    {
        printf("the value of element %d is : %d\n",i+1,ptr[i]);
    }

    return 0;
}