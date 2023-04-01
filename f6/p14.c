#include<stdio.h>
int main()
{
    int arr[3][3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                printf("Entre the value of arr[%d]{%d][%d]:\n",i,j,k);
                scanf("%d",&arr[i][j][k]);
            }
        }
    }
        for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                printf("The address of arr[%d]{%d][%d] is: %u \n",i,j,k,&arr[i][j][k]);
            }
        }
    }
    return 0;
}