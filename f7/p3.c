#include<stdio.h>
int main()
{
    char str[20];
    printf("Entre your name :\n");

    scanf("%s",str); //scanf cannot be used to input multiword strings with spaces.

    // gets() and puts() is used to recieve multiword string with spaces.

    printf("Your name is : %s",str);

    return 0;
}