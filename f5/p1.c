#include<stdio.h>
int main()
{
    int i=20, *j,**k; //**k is pointer to pointer , we can also define pointer to a pointer to a pointer, but we barely need them.
    j=&i; //j will now store address of i;
    k = &j;
    printf("The value of i is %d\n",i);
    printf("The address of i is %u\n",j); //%u is the specifier that store address.
    printf("the address of i is %u\n",&i);
    printf("The value at address of i is %d\n",*j);
    printf("The address of j is %u\n",&j);
    printf("The value at address of j is %d\n",*(&j));
    printf("The address of address of j is %u\n",&k);

    return 0;
}