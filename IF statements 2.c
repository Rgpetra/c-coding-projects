/*Robert Petra
This program asks the user for the rainfall last month and determines if the area he is in is in a drought or is in risk of a flood*/
#include<stdio.h>
main()
{
    /*declaring our variables*/
    int x;
    /*asking user for rainfall in millimeters this month*/
    printf("Please enter the amount of rainfall for this month in millimeters\n");
    scanf("%i",&x);
    /*If else statements*/
    if(x<=20)
        {
            /*If rainfall is too little*/
            printf("The area you are in is currently in a drought\n");
        }
    else
        {
            /*If rainfall is too much*/
            if(x>=250)
                {
                    printf("The area you are in is currently in risk of a flood\n");
                }
            else
                {
                    /*If rainfall is just right*/
                    printf("The area you are in is fine regarding rainfall\n");
                }
        }
        /*ending statement*/
        return 0;
}
