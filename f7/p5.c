#include<stdio.h>
int main()
{
    char *ptr = "Vipul";
    char str[] = "Pawan";

    ptr="Rajat"; // by defining pointer we can reinitialise.
    // str="Rajat"; once string declared using [] cannot be reinitialised.

    printf("%s\n",ptr);
    printf("%s",str);

    return 0;
}