#include<stdio.h>
int main()
{
    FILE *ptr;
    // ptr = fopen("s1.txt","r"); -----> r is used to read the file;

    // ptr = fopen("s1.txt","w"); -----> w is used to write the file;

    ptr = fopen("s1.txt","r");
    fclose(ptr);
    return 0;
}