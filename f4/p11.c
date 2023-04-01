#include<stdio.h>
int main()
{
    int n,b,s=1,i;
    printf("Entre the value of n\n");
    scanf("%d",&n);

    for(b=0;b<n;b++)
    {
        i=1;
        for(i;i<=s;i++)
        {
            printf("%c",'*');
        }
        printf("\n");
        s=s+2;

    }
    return 0;
}