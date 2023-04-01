#include<stdio.h>
#include<string.h>
int main()
{
    char *str="Vipul";
    char str2[30];

    strcpy(str2,str); // copy the contents of 2nd string to 1st string passed to it.

    printf("Now the str2 is : %s",str2);
    return 0;
}