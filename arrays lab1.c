/* Robert Petra 
This program asks the user to enter ten numbers.
Then tells the user the smallest and the largest numbers that they entered.*/
#include <stdio.h>
main ()
{
  int p, number[12], highest = 0, lowest = 99999999; //declaring variables
  printf ("Enter 10 random numbers.\n"); //asking user for numbers
  for (p = 1; p <= 10; p++) //for loop for array
    {
      scanf ("%i", &number[p]); //user inputing numbers for array
    }
  for (p = 1; p <= 10; p++) //for loop for finding lowest and highest numbers
    {
      if (number[p] > highest) 
	{
	  highest = number[p]; //setting highest number from array
	}
      if (number[p] < lowest)
	{
	  lowest = number[p]; //setting lowest number from array
	}
    }
  printf ("The highest number you entered was %i.\n", highest); //telling user highest #
  printf ("The lowest number you entered was %i.\n", lowest); //telling user lowest #
  return 0;
}
