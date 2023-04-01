#include<stdio.h>
void reverse(int arr[],int n);

int main()
{
    int n;
    printf("Entre the value of n\n");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        printf("Ente th value of arr[%d] :\n",i);
        scanf("%d",&arr[i]);
    }

    reverse(arr,n);

    for(int j=0;j<n;j++)
    {
        printf("Updated value of arr[%d] is :%d\n",j,arr[j]);
    }
    return 0;
}
void reverse(int arr[],int n)
{
    int temp;
    
    for(int i=0;i<n/2;i++) // we are running this loop upto n/2.
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}