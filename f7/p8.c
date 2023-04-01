#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20] = "Vipul"; // need to give enough space in string 1 so that it can accomodate string 2.
    char *str2 = "Parashar";

    strcat(str1,str2); 
    //values will be stored in 1st string, without any space between two strings.
    
    int val1=strcmp("hello","hello"); // will return zero if both strings are same;

    int val2=strcmp(str1,str2);
    // will return the +ve value if the difference in ascii value of 1st mismatch character of 1st and 2nd string is +ve.
    //here the first mismatch character is V and P.

    int val3=strcmp("hen","hey");
    // will return the -ve value if the difference in ascii value of 1st mismatch character of 1st and 2nd string is -ve.
    // here the first mismatch character is n and y.


    printf("Now the str1 is :%s\n",str1);

    printf("valus of val1 , val 2, val 3 is %d, %d and %d respectively",val1,val2,val3);

    return 0;
}