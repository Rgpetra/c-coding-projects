/*Robert Petra
This program asks the user for their age and tells them the percentage of people their age who like disco*/
#include<stdio.h>
main()
{
    /*Declaring variable*/
    int age;
    /*Asking user for age*/
    printf("Please enter your age to find out how many people your age still like disco\n");
    scanf("%i",&age);
    /*Less than age 20 statement*/
    if (age<=20)
        {
            printf("The percentage of people your age who like disco is 10 percent\n");
        }
    else
        {
            /*Between age 20 and 40 statement*/
            if ((age>20)&&(age<=40))
                {
                    printf("The percentage of people your age who like disco is 20 percent\n");
                }
            else
                {
                    /*Between age 40 and 60 statement*/
                    if ((age>40)&&(age<=60))
                        {
                            printf("The percentage of people your age who like disco is 30 percent\n");
                        }
                    else
                        {
                            /*Between age 60 and 80 statement*/
                            if ((age>60)&&(age<=80))
                                {
                                    printf("The percentage of people your age who like disco is 25 percent\n");
                                }
                            else
                                {
                                    /*Between age 80 and 120*/
                                    if ((age>80)&&(age<=120))
                                        {
                                            printf("The percentage of people your age who like disco is 20 percent\n");
                                        }
                                    else
                                        {
                                            /*Immortal statement*/
                                            if (age>120)
                                                {
                                                    printf("No one in the world is that old, enter your real age\n");
                                                }
                                            else
                                                {
                                                    /*Unborn Statement*/
                                                    if (age<0)
                                                        {
                                                            printf("If that were true how are you even alive?\n");
                                                        }
                                                }
                                        }
                                }
                        }
                }
        }
    /*End Statement*/
    return 0;
}
