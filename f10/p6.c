#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n;

    ptr=(int*)calloc(10,sizeof(int));

    for(int i=0;i<10;i++)
    {
        ptr[i]=7*(i+1);
        printf("7 X %d = %d\n",i+1,ptr[i]);
    }

    ptr=(int*)realloc(ptr,15*sizeof(int));
    for(int i=10;i<15;i++)
    {
        ptr[i]=7*(i+1);
        printf("7 X %d = %d\n",i+1,ptr[i]);    
    }

    return 0;
}