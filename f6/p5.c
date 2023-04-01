#include<stdio.h>
int main()
{
    int a[4],*ptr;

    ptr=&a[0]; // or i can write ptr=a; this will also do the same work.

    for(int i=0;i<4;i++)
    {
        printf("Entre the value of element %d of array : \n",i+1);
        scanf("%d",ptr);
        ptr++;
    }
    for(int j=0;j<4;j++)
    {
        printf("The value of a[%d] is: %d\n",j,a[j]);
    }
    return 0;
}