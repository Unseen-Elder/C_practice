#include<stdio.h>
int pascal(int i, int j, int n);
int main()
{
    int a;

    a=pascal(9,10,10);

    printf("%d",a);
    
    return 0;
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