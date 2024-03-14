/*Robert Petra
This program asks the user for any number and determines if that number is even or odd.*/
#include <stdio.h>
int main()
{
    //declaring variables
    int number,number2;
    //asking user for number
    printf("Please enter any number.\n");
    scanf("%i", &number);
    // True if the number is perfectly divisible by 2
    number2= number % 2;
    switch (number2)
    {
    case(0):
            //even
            printf("%i is even.\n", number);
            break;
    case(1):
            //odd
            printf("%i is odd.\n", number);
            break;
    }
    return 0;
}
