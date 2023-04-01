#include<stdio.h>
int fib(int a);
int main()
{
    int n;
    printf("Entre the value of n between (1-46)\n");
    scanf("%d",&n);
    if(n%10==1 && !(n>10&&n<20))
    {
    printf("The %dst element of fibbonaci series is %d",n,fib(n));
    }
    else if(n%10==2 && !(n>10&&n<20))
    {
    printf("The %dnd element of fibbonaci series is %d",n,fib(n));
    }
    else if(n%10==3 && !(n>10&&n<20))
    {
    printf("The %drd element of fibbonaci series is %d",n,fib(n));
    }
    else
    {
    printf("The %dth element of fibbonaci series is %d",n,fib(n));
    }
    
    return 0;
}
int fib(int a)
{
    if(a==1 || a==2)
    return 1;
    else
    return (fib(a-1)+fib(a-2));
}