#include<stdio.h>
int main()
{
    int a=0,n;
    printf("Entre the number\n");
    scanf("%d",&n);
    printf("\n");
    do
    {
        a++;
        printf("%d\n",a);      
    }
    while (a<n);
    // while loop checks condition first then execute code.
    // do while executes code first then checks the condition.
    // do while executes code atleast one time even if the condition is unsatisfied.

    //     do
    //     {
    //         code;
    //     }
    //     while(condition);
    
    return 0;
}