/*Robert Petra
This program asks the user to guess how many counties are in georgia and gives the user 5 tries to guess correctly*/
#include<stdio.h>
main()
{
    int tries,county;
    printf("Guess how many counties are in Georgia.\n");
    scanf("%i",&county);
    tries=5;
    while((county!=159)&&(tries>1))
    {
        if(county>159)
        {
            printf("That guess is too large.\n");
        }
        else
        {
            if(county<159)
            {
                printf("That guess is too small.\n");
            }
        }
        //using a try
        --tries;
        printf("You have %i tries left. Willing to give it another go?\n",tries);
        scanf("%i",&county);
    }
    if (county==159)
    {
        //if user guessed correctly within the 5 tries
        printf("Congratulations! You are a Georgia expert!\n");        
    }
    else
    {
        //if user guessed incorrectly all 5 tries
        if (tries==1)
        {
            printf("You have ran out of tries.\nThe correct answer was 159 Counties, that's alot of Counties, only second to Texas.\n");
        }
    }
    return 0;
}
