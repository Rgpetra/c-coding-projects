/* Robert Petra 
This program asks the user to enter eight numbers.
The program then list all of the numbers that are below
10 on one line and all of the numbers 10 or above on another line.*/
#include <stdio.h>
main ()
{
    int p=1, a=0, b=0, number, less[8], more[8]; //declaring variables
    printf ("Enter 8 random numbers that are above or below 10.\n"); //asking user to input 8 random numbers
    do
    {
      scanf("%i",&number); //user inputs numbers
      ++p; //limiting user to 8 numbers
      if(number>10) //inputing number to more than 10 array
      {
          more[a]=number;
          ++a; //incrementing value of array that user is inputing
      }
      if(number<10) //inputing number to less than 10 array
      {
          less[b]=number;
          ++b; //incrementing value of array that user is inputing
      }
    }
    while (p<=8); //limiting user to 8 numbers
    printf("Numbers above 10\n"); //telling user that the numbers about to be read are the ones that are above 10
    for(p = 0; p < a; p++) //for loop for values over 10
    {
      printf("%i ",more[p]); //displaying values over 10
    }
    printf("\nNumbers below 10\n"); //telling user that the numbers about to be read are the ones that are below 10
    for(p = 0; p < b; p++) //for loop for values under 10
    {
      printf("%i ",less[p]); //displaying values under 10
    }
    return 0;
}
