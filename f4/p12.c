#include<stdio.h>
void star(int n);
int main()
{
    int n;

    printf("Entre the value of n\n");
    scanf("%d",&n);
    star(n);
    
    return 0;
}
void star(int n)
{
    if (n>0)
    {
    star(n-1);
    printf("\n");
    if(n==1)
    {
        printf("*");
    }
    else
    {
        for(int i=0;i<2*n-1;i++)
        {
            printf("*");
        }
    }
    }
}
