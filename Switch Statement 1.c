/*Robert Petra
This program will ask you input a number between 1 and 12 and will return the month corresponding with that number. If you enter an incorrect number, it will return that you did not enter a correct number*/
#include<stdio.h>
main()
{
    int month;
    // month is our designated integer
    printf("Example: If you input 1, then January will appear.\n\n");
    printf("Enter the number between 1 and 12 that corresponds with the month you want to see: \n");
    scanf("%i",&month);
    //Asks the user to inpurt

    switch(month)
    {
        case 1:
            printf("January has 31 days in the month.");
            break;
        case 2:
            printf("February has 28 days in the month.\n");
            printf("Fun fact: It also has 29 days if its a leap year!\n");
            break;
        case 3:
            printf("March has 31 days in the month.\n");
            break;
        case 4:
            printf("April has 30 days in the month.\n");
            break;
        case 5:
            printf("May has 31 days in the month.\n");
            break;
        case 6:
            printf("June has 30 days in the month.\n");
            break;
        case 7:
            printf("July has 31 days in the month.\n");
            break;
        case 8:
            printf("August has 31 days in the month.\n");
            break;
        case 9:
            printf("September has 30 days in the month.\n");
            break;
        case 10:
            printf("October has 31 days in the month.\n");
            break;
        case 11:
            printf("November has 30 days in the month.\n");
            break;
        case 12:
            printf("December has 31 days in the month.\n");
            break;
        default:
            printf("You didnt enter a number that corresponds with the month\n");
            break;
    }
    return 0;
}
