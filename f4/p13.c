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
    int i,j,k,line=0;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

