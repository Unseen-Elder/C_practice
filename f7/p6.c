#include<stdio.h>
#include<string.h>
int main()
{
    char *str="Vipul";
    int a = strlen(str); // strlen counts the number of characters in string excluding the null character.

    printf("the length of string is : %d",a);
    return 0;
}