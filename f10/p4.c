#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,*ptr2;

    ptr=(int *)malloc(4*sizeof(int));

    for(int i=0;i<4;i++)
    {
        ptr2 = (int *)malloc(600000*sizeof(int));
        printf("Entre the value of element %d :\n",i+1);
        scanf("%d",&ptr[i]);

        free(ptr2); //if i dont free the memory then it will keep on building and take a lot of RAM.
    }


    return 0;
}