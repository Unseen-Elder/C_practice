#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("s4.txt","r");

    char c;

    c=fgetc(fptr);
    while(c!=EOF)
    {
        printf("%c",c);
        c=fgetc(fptr);
    }
    fclose(fptr);
    return 0;
}