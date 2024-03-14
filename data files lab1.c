/*Robert Petra 
This lab has a data file that consists of twelve random numbers between 0 and 100. 
Then, creates a new data file that includes only the numbers from the first file that are greater than 60.
The user will not be given the results, but will be informed when the process is completed*/
#include<stdio.h>
main()
{
    int x,y=0; //declaring variables
    FILE*cup; //pointing to file cup
    FILE*greater; //pointing to file greater
    greater=fopen("60up.txt","w"); //opening file '60up' to write in it
    cup=fopen("Rando12.txt","r"); //opening file 'Rando12' to read from it
    do
    {
    y++; //incrementing y to stop loop
    fscanf(cup,"%i",&x); //reading from file 'Rando12'
    if(x>60) //setting parameters for file '60up'
        {
            fprintf(greater,x," \n"); //writing to file '60up'
        }
    }
    while(y<12); //while loop
    printf("The process is complete\n"); //telling user the process is complete
}
