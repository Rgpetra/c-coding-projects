/*Robert Petra
This program asks the user to guess the height of Mount Everest (in feet above sea level) and gives the user 5 tries to guess correctly*/
#include<stdio.h>
main()
{
    //declaring variables
    int tries=5,height;
    //asking user for age
    printf("Guess the height of Mount Everest (in feet above sea level).\n");
    //setting number of tries
    do
    {
        //getting height
        scanf("%i",&height);
        //using a try
        --tries;
        //guess is too big
        if(height>29029)
        {
            printf("That guess is too big.\n");
        }
        else
        {
            //guess is too small
            if(height<29029)
            {
                printf("That guess is too small.\n");
            }
            else
            {
                //guessed correctly
                if(height==29029)
                {
                    printf("That's Correct! You are brilliant\n.");
                }
            }
        }
        if(tries>0)
        {
        //telling user how many tries they have left
        printf("You have %i tries left.\nWilling to give it another go?\n",tries);
        }
    }
    while(tries>0);
    //out of tries
    printf("You have ran out of tries.\nThe height of Mount Everest is 29,029 feet.\n");
    return 0;
}
