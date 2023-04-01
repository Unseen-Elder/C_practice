#include<stdio.h>
void printarray(int *ptr,int n);
int main()
{
    int arr[]={1,4,5,7,5,3,9,8,3};

    printarray(arr,9);
    return 0;
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("thr value of elemrnt %d of array is : %d\n",i+1,arr[i]);
     }
}