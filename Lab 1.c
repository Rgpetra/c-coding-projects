/* Robert Petra
This program asks the user to enter ten numbers.
Then tells the user the smallest and the largest numbers that they entered.*/
#include <stdio.h>
main ()
{
  int p, number[10], highest = 0, lowest = 100000000000000;
  printf ("Enter 10 random numbers.\n");
  for (p = 1; p <= 10; p++)
    {
      scanf ("%i", &number[p]);
    }
  for (p = 1; p <= 10; p++)
    {
      if (number[p] > highest)
	{
	  highest = number[p];
	}
      if (number[p] < lowest)
	{
	  lowest = number[p];
	}
    }
  printf ("The highest number you entered was %i.\n", highest);
  printf ("The lowest number you entered was %i.\n", lowest);
  return 0;
}
