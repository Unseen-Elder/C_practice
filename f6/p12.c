#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Entre the value of n\n");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        printf("Ente th value of arr[%d] :\n",i);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            count++;
        }
    }

    printf("Number of positive values in array is: %d",count);
    
    return 0;
}