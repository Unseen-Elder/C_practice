#include<stdio.h>
int main()
{
    int a;
    printf("Entre the size of array\n");
    scanf("%d",&a);
    
    int m[a];

    for(int i=0;i<a;i++)
    {
        printf("Entre the value of element %d of array : \n",i+1);
        scanf("%d",&m[i]);
    }

    for(int j=0;j<a;j++)
    {
        printf("The value of m[%d] is: %d\n",j,m[j]);
    }

    return 0;
}