#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
   int restart;
   int num1,num2,input,guess1,guess2;
   do
   {
    guess1=1; guess2=1;input=0;
    srand(time(0));
    num1= rand()%100 +1;
    
    printf("********Player 1 Turn********\n");

    for(guess1;input!=num1;guess1++)
    {
        printf("Guess a number\n");
        scanf("%d",&input);

     if(input>num1)
     {
        printf("Input is greater than actual number\n");
     }
     else if (input<num1)
     {
        printf("Input is smaller than actual number\n");
     }
     else
     {
        break;
     }
    }

    printf("\nCongratulations You guessed it\n\n");

    srand(time(0));
    num2= rand()%100 +1;

    printf("********Player 2 Turn********\n");
    for(guess2;input!=num2;guess2++)
    {
        printf("Guess a number\n");
        scanf("%d",&input);

     if(input>num2)
     {
        printf("Input is greater than actual number\n");
     }
     else if (input<num2)
     {
        printf("Input is smaller than actual number\n");
     }
     else
     {
        break;
     }
    }

    printf("\nCongratulations You guessed it\n\n");

    printf("Player 1 took %d Guesses\n",guess1);
    printf("Player 2 took %d Guesses\n",guess2);

    if(guess1<guess2)
    {
        printf("\nPlayer 1 Wins the game\n");
    }

    else if(guess1>guess2)
    {
        printf("\nPlayer 2 Wins the game\n");
    }
    else
    {
        printf("\nDRAW\n");
    }

    printf("\nPress 1 to restart the game\n");
    printf("Press 0 to stop the game\n");

    scanf("%d",&restart);
   }while(restart!=0);
   return 0;
}