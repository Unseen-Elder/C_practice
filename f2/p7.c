#include<stdio.h>
int main()
{
    int rate;
    printf("entre your rating\n");
    scanf("%d",&rate);
    /*
    switch (integer expression)
    {
    case  constant-expression :
         code 
        break;
    
    default:
        break;
    }
    */
    switch(rate)
    {
        case 1:
        printf("your rating is 1\n");
        break;
        // break is used to break the switch 
        // if break not used then all the cases below true statement will run.
        case 2:
        printf("your rating is 2\n");
        break;
        case 3:
        printf("your rating is 3\n");
        break;
        case 4:
        printf("your rating is 4\n");
        break;
        case 5:
        printf("your rating is 5\n");
        break;
        default:
        printf("your rating is invalid\n");
        break;

    }
    return 0;
}