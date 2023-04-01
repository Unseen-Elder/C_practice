#include<stdio.h>
int main()
{
    int sum=0,i=0,n;

    printf("ENtre the number\n");
    scanf("%d",&n);

    do
    {
        i++;
        sum=sum+i;
    }while(i<n);

    printf("The sum is %d\n",sum);

    return 0;
}