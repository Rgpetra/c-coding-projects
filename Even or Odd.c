/*Robert Petra
This program asks the user for any number and determines if that number is even or odd.*/
#include <stdio.h>
int main()
{
    //declaring variables
    int number;
    //asking user for number
    printf("Please enter any number.\n");
    scanf("%i", &number);
    // True if the number is perfectly divisible by 2
    if(number % 2 == 0)
        {
            //even
            printf("%i is even.\n", number);
        }
    else
        {
            //odd
            printf("%i is odd.\n", number);
        }
    return 0;
}
