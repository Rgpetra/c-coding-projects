/*Robert Petra
this program requires the user to enter their desired systolic blood pressure.
If they enter a number outside the healthy range (90-120), tell them that they can do better and require them to enter a new number.
(They must keep entering numbers until they choose a number from 90-120.)
Once they enter an acceptable number, congratulate them on their good choice.*/
#include<stdio.h>
main()
{
    //declaring variables
    int press;
    //asking user for their desired blood pressure
    printf("Please enter your desired systolic blood pressure.\n");
    //getting users desired blood pressure
    scanf("%i",&press);
    //for loop that repeats until a number in the healthy range is chosen
    for(press;((press>120)||(press<90));scanf("%i",&press))
    {
        //asking user to enter number again
        printf("Please enter a systolic blood pressure that is in the healthy range.\n");
    }
    //user made healthy choice
    printf("Congrats on making a good healhty choice!\n");
    return 0;
}

