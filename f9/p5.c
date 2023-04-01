#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("s4.txt","r");

    char c;

    c=fgetc(fptr);

    // printf("The value of my character is %c",c);
    // printf("The value of my character is %c",c);
    // printf("The value of my character is %c",c);

    // this will print first character of file 3 times.

    // we have to update value of c each time to read all characters.

    printf("The value of my character is %c\n",c);
    c=fgetc(fptr);
    printf("The value of my character is %c\n",c);
    c=fgetc(fptr);
    printf("The value of my character is %c\n",c);
    fclose(fptr);
    return 0;
}