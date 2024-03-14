/*Robert Petra
This program asks the user to guess Muhammad Ali's age and gives the user 4 tries to guess correctly*/
#include<stdio.h>
main()
{
    //declaring variables
    int tries=4,age;
    //asking user for age
    printf("Guess Muhammad Ali's age.\n");
    //setting number of tries
    do
    {
        //getting age
        scanf("%i",&age);
        //using a try
        --tries;
        //guess is too big
        if(age>74)
        {
            printf("That guess is too big.\n");
        }
        else
        {
            //guess is too small
            if(age<74)
            {
                printf("That guess is too small.\n");
            }
            else
            {
                //guessed correctly
                if(age==74)
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
    printf("You have ran out of tries.\nSadly, Muhammad Ali died back in 2016, but he lived to be 74 years of age.\n");
    return 0;
}
