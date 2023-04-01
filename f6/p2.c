#include<stdio.h>
int main()
{
    int a[4]={22,31,74,65}; // initialising 1d array
    int b[]={21,56,78,94,10,13}; //other way of initialising 
    float c[]={2.35,3.78,22.4,7.52};
    char d[]={'v','i','p','u','l'};
    
    for(int i=0;i<4;i++)
    {
        printf("element %d of array 'a' is : %d\n",i+1,a[i]);
    }
    for(int j=0;j<5;j++)
    {
        printf("element %d of array 'b' is : %d\n",j+1,b[j]);
    }
    for(int k=0;k<4;k++)
    {
        printf("element %d of array 'c' is : %.2f\n",k+1,c[k]);
    }
    for(int l=0;l<5;l++)
    {
        printf("element %d of array 'd' is : %c\n",l+1,d[l]);
    }
    return 0;
}