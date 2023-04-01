#include<stdio.h>
int main()
{
   int arr[3][2]={{1,4},{2,9},{4,5}}; 

    printf("The matrix is:\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d",arr[i][j]);
            printf("   ");
        }
        printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("The address of arr[%d][%d] is: %d\n",i+1,j+1,&arr[i][j]);
            // in 2-d array  is stored in textbook format like a[0][0] then a[0][1] and so on.
        }
    }

    return 0;
}