//Robert Petra
//This program asks the user for any number and then repeats back a statement that many times
#include<stdio.h>
main()
{
    //declaring variables
    int number,x;
    //asking user for number
    printf("Please enter any number.\n");
    //getting number
    scanf("%i",&number);
    //for loop
    for(x=0;x<=number;++x)
    {
        //my cat likes to do the hula
        printf("My cat likes to do the hula\n");
    }
    return 0;
}
