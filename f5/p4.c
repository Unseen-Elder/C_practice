#include<stdio.h>
void address(int i);
int main()
{
    int i=20,*j;
    j= &i;

    printf("The address of i is %u\n",j);

    address(i);

    return 0;
}

void address(int i)
{
    int *k;
    k = &i;

    printf("The address of copy of i is %u\n",k);   //copy will be stored at different address and hance value of address is different.

}