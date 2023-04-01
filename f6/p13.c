#include<stdio.h>
int main()
{
    int arr[3][10];

    for(int i=0;i<3;i++)
    {
        if(i==0)
        {
            for(int j=0;j<10;j++)
            {
                arr[i][j] = 2*(j+1);
            }
        }

        if(i==1)
        {
            for(int j=0;j<10;j++)
            {
                arr[i][j]=7*(j+1);
            }
        }

        if(i==2)
        {
            for(int j=0;j<10;j++)
            {
                arr[i][j]=9*(j+1);
            }
        }
    }
    
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<10;j++)
        {
            printf("%d",arr[i][j]);
            printf("   ");
        }
        printf("\n");
    }
    return 0;
}