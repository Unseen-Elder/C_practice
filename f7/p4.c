#include<stdio.h>
int main()
{
    char str[20];
    char *ptr;

    printf("Entre your name :\n");
    gets(str);
    printf("Your name is :");
    puts(str); // prints the string and place the cursor in next line.

    return 0;
}