#include<stdio.h>
int main()
{
    char str1[6]={'v','i','p','u','l','\0'}; // \0 is used to denote string termination
    char str2[]="Vipul is learning C programming"; //convinent way to initiate a string array

    char *ptr1,*ptr2;
    ptr1=str1;
    ptr2=str2;

    while(*ptr1 != '\0')
    {
        printf("%c",*ptr1);
        ptr1++;
    }

    printf("\n");

    while(*ptr2 != '\0')
    {
        printf("%c",*ptr2);
        ptr2++;
    }

    return 0;
}