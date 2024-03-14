/*Robert Petra
This program asks the user for the current temperature and determines how the temperature feels*/
#include<stdio.h>
main()
{
    /*Declaring variable*/
    int temp;
    /*Asking user for temperature*/
    printf("Please enter the current temperature in Fahrenheit\n");
    scanf("%i",&temp);
    /*Hot statement*/
    if ((temp>=85)&&(temp<120))
        {
            printf("That's hot! I'd recommend turning on the A/C\n");
        }
    else
        {
            /*Warm statement*/
            if ((temp>=65)&&(temp<85))
                {
                    printf("It feels warm in here\n");
                }
            else
                {
                    /*Pleasant statement*/
                    if ((temp>=45)&&(temp<65))
                        {
                            printf("It's a pleasant temperature here, not too hot and not too cold\n");
                        }
                    else
                        {
                            /*Cool statement*/
                            if ((temp>=15)&&(temp<45))
                                {
                                    printf("It is cool, better grab a jacket\n");
                                }
                            else
                                {
                                    /*Cold statement*/
                                    if ((temp>-20)&&(temp<15))
                                        {
                                            printf("That's cold, better stay inside near the fireplace\n");
                                        }
                                    else
                                        {
                                            /*Too hot statement*/
                                            if (temp>=120)
                                                {
                                                    printf("Don't try to trick me, that temperatures too high\n");
                                                }
                                            else
                                                {
                                                    /*Too cold statement*/
                                                    if (temp<=-20)
                                                        {
                                                            printf("If this were true we would be in the tundra\n");
                                                        }
                                                }
                                        }
                                }
                        }
                }
        }
    return 0;
}
