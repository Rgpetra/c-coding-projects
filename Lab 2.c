/* Robert Petra
This program is asking the user for an input for the given formula and then giving them the answer in different decimal values*/
#include<stdio.h>
main()
{
    /*our variables*/
    double x,y;
    /*asking for value of x */
    printf("Please enter the value of x for the following formula \ny=0.45x^2-7.35x+4.88 \n");
    /*asking user for an input for the given formula */
    scanf("%lf",&x);
    /*y is calculated*/
    y=0.45*(x*x)-7.35*x+4.88;
    /*displaying the answer with 3 differnt decimal values*/
    printf("Here is your answer with 1 decimal point \n %.1lf.\n",y);
    printf("with 2 decimal points \n %.2lf.\n",y);
    printf("with 3 decimal points \n %.3lf.\n",y);
    return 0;
}
