#include<stdio.h>
void printarray(int arr[],int n);
int main()
{
    int arr[]={1,4,5,7,5,3,9,8,3};

    printarray(arr,9);

    printf("the value of 2nd element of array after change is : %d",arr[2]); /* note that the value is changing because 
    arrays can never be paased by value in c */
    return 0;
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("thr value of elemrnt %d of array is : %d\n",i+1,arr[i]);
        
    }
    arr[2]=10;
}