#include<stdio.h>
void star(int n);
int pascal(int i,int j,int n);
int main()
{
    int n;

    printf("Entre the value of n\n");
    scanf("%d",&n);
    star(n);

    return 0;
}
void star(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n-1;j++)
        {
            if(pascal(i,j,n)==0)
            {
                printf(" ");
            }
            else
            {
                printf("%d",pascal(i,j,n));
            }
        }
        printf("\n");
    }
}
int pascal(int i, int j, int n)
{

    if(i==1 || j==1 || j==2*n-1)
    {
        if(i==1)
        {
            
        if(j==n)
        {
            return 1;
        }
        else
        {
             return 0;
        }
        

        }
        else
        {
        
    
        if(i==n)
        {
        return 1;
        }
        else
        {
        return 0;
        }
            

        }
    }
    return (pascal(i-1,j-1,n)+pascal(i-1,j+1,n));
}