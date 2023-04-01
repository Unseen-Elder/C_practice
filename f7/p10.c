#include<stdio.h>
int len(char str[]);
int main()
{
    char str[50];

    printf("entre the string\n");
    gets(str);

    printf("The length of string is: %d ",len(str)) ;

    return 0;
}
int len(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }

    return i;
}