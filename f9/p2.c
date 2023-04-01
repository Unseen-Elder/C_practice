#include<stdio.h>
int main()
{
    char str[50];
    FILE *ptr;

    ptr = fopen("s3.txt","r");
    fclose(ptr);

    if(ptr == NULL)
    {
        printf("This file doesnot exist\n ");
    }
    else
    {
        printf("this file exist\n");
    }



    return 0;
}