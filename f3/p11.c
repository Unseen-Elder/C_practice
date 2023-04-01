#include<stdio.h>
int main()
{
    int n,i,a=0;
    printf("Entre the number\n");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            a++;
        }
        if(a>1)
        {
            printf("This is not a prime number\n");
            break;
        }
        if(a==1 && (i==(n-1)))
        {
            printf("This is a prime number\n");
        }
    }
    return 0;
}