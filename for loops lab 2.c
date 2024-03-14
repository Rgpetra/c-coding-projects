/*Robert Petra
this program requires the user to enter their desired systolic blood pressure within 6 tries.
If they enter a number outside the healthy range (90-120), tell them that they can do better and require them to enter a new number.
(They must keep entering numbers until they choose a number from 90-120.)
Once they enter an acceptable number, congratulate them on their good choice.*/
#include<stdio.h>
main()
{
    //declaring variables
    int press,tries=6;
    //asking user for their desired blood pressure
    printf("Please enter your desired systolic blood pressure.\n");
    //getting users desired blood pressure
    scanf("%i",&press);
    //for loop that repeats until a number in the healthy range is chosen
    for(press,tries;(((press>120)||(press<90))&&(tries>1));scanf("%i",&press))
    {
        //using a try
        --tries;
        //telling user how many uses they have left
        printf("You have %i tries left.\n",tries);
        //asking user to enter number again
        printf("Please enter a systolic blood pressure that is in the healthy range.\n");
    }
    //if user entered a correct number
    if((press<=120)&&(press>=90))
    {
        //user made healthy choice
        printf("You have entered a number in the healthy range.\nCongrats on making a good healhty choice!\n");
    }
    else
    {
        //if user ran out of tries
        if(tries=1)
        {
            //telling user that they have ran out of tries
            printf("Sorry, you have ran out of tries\n");
        }
    }
    return 0;
}
