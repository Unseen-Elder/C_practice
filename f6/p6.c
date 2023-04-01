#include<stdio.h>
void printarray(int *ptr,int n);
int main()
{
    int arr[]={1,4,5,7,5,3,9,8,3};
    // int *ptr; 
    // ptr=arr;
    // printarray(ptr,9); This will also do the same work;

    printarray(arr,9);
    return 0;
}
void printarray(int *ptr,int n)
// void printarray(int ptr[],n) , this will also give same result.because when we are passing array then address of first 
// element is passed. Arrays are always paased as pointers in c, hence passing an array or pointer will give same result.
{
    for(int i=0;i<n;i++)
    {
        printf("thr value of elemrnt %d of array is : %d\n",i+1,*(ptr+i));
        
    }
}