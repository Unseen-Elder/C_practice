#include<stdio.h>
int main()
{
    int num=45;
    FILE *ptr;

    ptr = fopen("s3.txt","w");

    fprintf(ptr,"The number is %d\n",num);
    fprintf(ptr,"Thanks\n");
    fprintf(ptr,"Twinkle, twinkle, little star,\nHow I wonder what you are!\nUp above the world so high,\nLike a diamond in the sky.\nTwinkle, twinkle, little star,\nHow I wonder what you are");

    fclose(ptr);
    return 0;
}