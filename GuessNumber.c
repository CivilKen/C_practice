/*
    Author: CivilKen
    Date: 16th July 2019
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    int randnum = rand() % 21;
    int guess, count=5;
    
    printf("%d\n", randnum);
    printf("This is a guessing game.\n");
    printf("Choose a number between 0 and 20.\n\n");

    while (count>0)
    {
        printf("You have %d tries left.\n", count);
        printf("Enter a guess: ");
        scanf("%d", &guess);

        if (guess>20)
        {
            printf("The correct number is between 0 and 20.\n\n");
            count -= 1;
        }
        

        else if (guess!=randnum)
        {
            printf("Sorry! You have wrong answer.\n");
            count -= 1;
            if (guess>randnum)
            {
                printf("The correct answer is smaller than your guess.\n\n");
            }
            else
            {
                printf("The correct answer is larger than your guess.\n\n");
            }
        }

        else
        {
            printf("Congreduation! You guessed it.\n");
            break;
        }
        
    }
    return 0;
}