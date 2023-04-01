#include<stdio.h>
int main()
{
    int a=0, b=0;
    // while(condition)
    // {
    //      code;
    // } 
    while(a<10)
    {
        printf("%d %d\n",a,b);
        a++;
        b+=10; // increment b by 10
    }
    return 0;
}