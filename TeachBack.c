/*This program asks the user for their age and determines what school they are in
Written by Robert Petra
Last updated 12/12/2020 */
#include<stdio.h>
main()
{
    /* Here is our variable*/
    int age;
    printf("Please enter your age\n");
   /*asking user for age*/
    scanf("%i",&age);
    if ((age<=11)&&(age>=5))
        {
            /* determining if user in elementary school*/
            printf("You are in Elementary School\n");
        }
    else
        {
            if ((age<=14)&&(age>=12))
                {
                    /*determining if user in Middle School*/
                    printf("You are in Middle School\n");
                }
            else
                {
                    if ((age<=19)&&(age>=15))
                        {
                            /*determining if user in high school*/
                            printf("You are in High School\n");
                        }
                    else 
                        {
                            /*determining if user in college or out of school*/
                            printf("You are either in college or out of school\n");
                        }
                }
        }
    return 0;
}
