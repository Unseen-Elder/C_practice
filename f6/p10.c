#include<stdio.h>
void reverse(int arr[],int n);

int main()
{
    int n;
    printf("Entre the value of n\n");
    scanf("%d",&n);

    int arr[n]; // this is wrong correct it

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
    int arr2[n];
    
    for(int i=0;i<n;i++)
    {
        arr2[i]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=arr2[n-1-i];
    }
}