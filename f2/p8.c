#include<stdio.h>
int main()
{
    int math,physics,chemistry,total;
    float percent;
    printf("entre maths marks out of 100\n");
    scanf("%d",&math);

    printf("entre physics marks out of 100\n");
    scanf("%d",&physics);

    printf("entre chemistry marks out of 100\n");
    scanf("%d",&chemistry);
    
    total= math+physics+chemistry;
    percent=(total/300.0)*100;

    if(math>33 && physics >33 && chemistry >33 && percent >40)
    {
        printf("pass with %.2f %%",percent); //%% is used to write %.

    }
    else
    printf("fail");
    return 0;
}