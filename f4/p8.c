#include<stdio.h>
int main()
{
    int a=3;
    printf("%d %d %d",a,++a,a++); //gcc compiler takes arguments from right to left.

    return 0;
}