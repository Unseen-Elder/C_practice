#include<stdio.h>
int main()
{
    int a[5],*int_ptr,i=0,j=0,k=0;
    float b[5],*float_ptr;
    char c[5],*char_ptr;

    int_ptr = &a[0];
    float_ptr = &b[0];
    char_ptr = &c[0];

    for(i;i<5;i++)
    {
        printf("The adress of a[%d] is %u\n",i,int_ptr); // for int address will increase by 4.
        int_ptr++;
    }
    for(j;j<5;j++)
    {
        printf("The adress of b[%d] is %u\n",j,float_ptr); // for float address will increase by 4.
        float_ptr++;
    }
    for(k;k<5;k++)
    {
        printf("The adress of c[%d] is %u\n",k,char_ptr); // for char address will increase by 1.
        char_ptr++;
    }
    return 0;
}