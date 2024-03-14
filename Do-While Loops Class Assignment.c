/*Robert Petra
This program asks the user to enter an alphabet and then print a message 
to the screen telling the user the letter that was chosen until the user types in the letter "z"*/
#include<stdio.h>
int main()
{
    //declaring variables
    char letter;
    do
    {
        //asking user for a letter
        printf("Enter the letter from the english alphabet that I'm thinking of.\n");
        //getting letter
        scanf("%c",&letter);
        //if statement
        if(letter!='z')
        {
            //telling user the letter they chose and giving them a hint
            printf("The letter you chose is %c\n",letter);
            printf("Here's a hint, it's near the end of the alphabet.\n");
        }
        //stores answer for condition and prevents loop from looping when it's not suppose to
        getchar();
    }
    //while looop condition
    while(letter!='z');
    //guessed correctly
    printf("Congrats you guessed correctly.\n");
    return 0;
}
