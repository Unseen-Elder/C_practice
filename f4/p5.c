#include<stdio.h>
int factorial(int a);
int main()
{
    int n,a;
    printf("Entre the number\n");
    scanf("%d",&n);

    a=factorial(n);

    printf("The factorial of %d is %d",n,a);
    return 0;
}
int factorial(int a)
{
    if(a==0 || a==1)
    {
        return 1;
    }
    else 
    {
        return a*factorial(a-1); // Reccursive function
    }
}