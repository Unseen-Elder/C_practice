#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int game(char you,char comp);
int main()
{
    char you,comp;
    int num,val,win=0,loss=0,score=0,restart,dummy;
    do
    {
        srand(time(0));
        num= rand()%3 +1;

        switch (num)
        {
    
            case 1:
            {
                comp='s';
                break;
            }

            case 2:
            {
                comp='w';
                break;
            }

            case 3:
            {
                comp='g';
                break;
            }

        }
        
        label:
        printf("Entre 's' for snake,'w' for water or 'g' for gun \n");
        fflush(stdin);
        scanf("%c",&you);

        if(!(you=='s' || you=='w' ||you=='g'))
        {
            printf("Invalid input\n");
            goto label;
        }

        printf("you chose %c and computer chose %c\n",you,comp);

        val = game(you,comp);

        if(val ==0)
        {
            printf("DRAW\n");
        }
        else if(val==1)
        {
            printf("You Won\n");
            win++;
        }
        else
        {
            printf("You lost\n");
            loss++;
        }

        score=win-loss;

        printf("Wins=%d\n",win);
        printf("Losses=%d\n",loss);

        printf("Total score is %d\n",score);

        dummy=2;

        while(!(dummy==0 || dummy==1))
        {
            printf("Press '1' to restart or '0' to end the game\n");
            scanf("%d",&dummy);

            if(dummy==0 || dummy==1)
            {
                restart=dummy;
            }
            else
            {
                printf("Invalid input\n");
            }
        }
    }while(restart!=0);

    return 0;
}
int game(char you,char comp)
{
    if(you==comp)
    {
        return 0;
    }
    else if(you =='s' && comp == 'w')
    {
        return 1;
    }
    else if (you=='s' && comp == 'g')
    {
        return -1;
    }
   else if(you=='w' && comp == 'g')
    {
        return 1;
    }
    else if(you=='w' && comp == 's')
    {
        return -1;
    }
    else if(you=='g' && comp == 's')
    {
        return 1;
    }
    else if(you=='g' && comp == 'w')
    {
        return -1;
    } 
}