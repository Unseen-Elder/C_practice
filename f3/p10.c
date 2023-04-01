#include<stdio.h>
int main()
{
    int a,n,skip1=15,skip2=20;

    printf("Entre the value of n \n");
    scanf("%d",&n);

    for( a=0 ; a<n ; a++ )
    {
        if((a >= skip1) && (a <= skip2))
        {
            continue;
        }
        printf("%d\n",a);
    }

    return 0;
}