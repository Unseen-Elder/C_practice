#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,arr[20];

    ptr=(int *)malloc(4 * sizeof(int)); //malloc returns a void pointer if we dont typecast it to an int or float or char etc.
    //the above expression returns a null pointer if memory cannot be allocated.


    printf("The size of int on my pc is : %d\n",sizeof(int));
    printf("The size of double on my pc is : %d\n",sizeof(double));
    printf("The size of array which i have created is : %d\n",sizeof(arr));

    for(int i=0;i<4;i++)
    {
        printf("Entre the value of element %d :\n",i+1);
        scanf("%d",&ptr[i]);
    }

    for(int i=0;i<4;i++)
    {
        printf("the value of element %d is : %d\n",i+1,ptr[i]);
    }

    return 0;
}