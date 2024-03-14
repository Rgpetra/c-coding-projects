/*Robert Petra
This program has a data file that consists of ten random numbers between 0 and 500.
Then, creates a new data file that includes only the numbers from the first file that are less than 200.
The user will not be given the results, but will be informed when the process is completed.*/
#include<stdio.h>
main()
{
    int x,y=0; //declaring variables
    FILE*head; //pointing to file head
    FILE*lesser; //pointing to file lesser
    lesser=fopen("200down.txt","w"); //opening file '200down' to write in it
    head=fopen("Rando10.txt","r"); //opening file 'Rando10' to read from it
    do
    {
    y++; //incrementing y to stop loop
    fscanf(head,"%i",&x); //reading from file 'Rando10'
    if(x<200) //setting parameters to writing in file '200down'
        {
            fprintf(lesser,x," \n"); //writing in file '200down'
        }
    }
    while(y<10); //while loop
    printf("The process is complete\n"); //telling user the process is complete
}
