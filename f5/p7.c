#include<stdio.h>
int main()
{
    int a=5, *b, **c, ***d;
    b=&a;
    c=&b;
    d=&c;

    printf("the value of a is %d",***d);

    return 0;
}