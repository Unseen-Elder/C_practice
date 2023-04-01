#include<stdio.h>
int main()
{
    int i=20,*j;
    j=&i;

    printf("The value of i is %d\n",i);
    printf("The value of address of i is %u\n",j);
    printf("The value stored at address of i %d\n",*j);

    return 0;
}