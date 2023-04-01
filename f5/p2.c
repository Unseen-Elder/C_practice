#include<stdio.h>
void swap1(int a , int b);
void swap2(int *a, int *b);
int main()
{
    int a=3,b=4;
    printf("The value of 'a' and 'b' before Swap is %d and %d respectively\n",a,b);
    swap1(a,b);
    printf("The value of 'a' and 'b' after Swap1 is %d and %d respectively\n",a,b);
    swap2(&a,&b);
    printf("The value of 'a' and 'b' after Swap2 is %d and %d respectively\n",a,b);

    return 0;
}
void swap1(int a,int b) // this will not swap the values
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void swap2(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
