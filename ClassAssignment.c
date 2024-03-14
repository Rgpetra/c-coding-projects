/*Robert Petra
This program asks the user to guess the number I am thinking of(2)
and it repeats until the number is guessed correctly or until the user quits*/
#include<stdio.h>
main()
{
    //declaring variables
    int number,guess;
    //asking user for guess value
    printf("Guess the number I am thinking of that's between 0-9.\n");
    //getting guess value from user
    scanf("%i",&guess);
    //setting value of number variable
    number=2;
    //while statement
    while(guess!=number)
    {
        //greater than guess
        if((guess>number)&&(guess<=9))
        {
            printf("That guess is too large.\n");
        }
        else
        {
            //less than guess
            if((guess<number)&&(guess>=0))
            {
                printf("That guess is too small.\n");
            }
            else
            {
                //greater than or less than 0-9
                if((guess>9)||(guess<0))
                {
                    printf("That number is not between 0 and 9\n");
                }
            }
        }
        //asking user to guess again
        printf("Want to guess again? Remember it's between 0-9.\n");
        //getting guess value
        scanf("%i",&guess);
    }
    //correct statement
    if (guess==number)
    {
        //if user guessed correctly
        printf("Congratulations! You guessed correctly!\n");        
    }
    return 0;
}
