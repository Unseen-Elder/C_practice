#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("s5.txt","w");

    putc('a',fptr);
    putc('b',fptr);
    putc('c',fptr);

    fclose(fptr);


    return 0;
}