#include<stdio.h>
int main()
{
    int a=0,n,j=10,k=97;

    printf("entre the vaue of n\n");
    scanf("%d",&n);

    do
    {
        printf("%d\n",a);
        if(a==7)
        {
            break;
        }
        a++;
    } while (a<10);

    for(j;j<100;j+=10)
    {
        printf("%d\n",j);

        if(j==40)
        {
            break;
        }
    }

    while(k<=122)
    {
        printf("%c",k);
        
        if(k==120)
        {
            break;
        }
        k++;
    }
    
    return 0;
}