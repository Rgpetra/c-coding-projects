/*Robert Petra 
Ask the user to input a string.
The program will then determine the largest word and the smallest word in the string.
Then the user will be asked for a search character.
The program will find determine the frequency of that character in the string.
The final output statement should print a statement saying what the largest word is and what the smallest word is.
It should also print a statement saying how many times the search character appeared in the string*/
#include <stdio.h>
#include <string.h>
main()
{
    char str[1000], word[20], max[20], min[20],choice,choice1;
    int i = 0, j = 0, flg = 0,ctr=0;
    printf("\nFind the largest and  smallest word in a string and the frequency of a character of your choosing\n"); //asking user to enter string
	printf("Input the string : "); //place for user to enter string
    fgets(str, 1000, stdin); //user inputs string
    printf("input the character to find frequency : "); //asking for user to choose a character
    scanf("%c",&choice); //user inputs character
    for (i = 0; i < strlen(str); i++) //repeats for every character in string
    {
        while (i < strlen(str) && !isspace(str[i])) //staying inside string length and blank spaces
        {
            word[j++] = str[i++]; //writing a string in word[]
        }
        if (j != 0) //only procs if the while loop is true
        {
            word[j] = '\0';
            if (!flg) //if flg is not equal to 0
            {
                flg = !flg;
                strcpy(max, word);//setting the first word as the default largest and smallest word
                strcpy(min, word);
            }
            if (strlen(word) > strlen(max))
            {
                strcpy(max, word); //setting new largest word
            }
            if (strlen(word) < strlen(min))
            {
                strcpy(min, word); //setting new smallest word
            }
            j = 0;
        }
    }
    if(choice<91)        //Allowing frequency for both uppercase and lowercase
    choice1 = choice+32;
    if(choice>96)        //Allowing frequency for both uppercase and lowercase
    choice1 = choice-32;
    for(i=0;str[i]!='\0';++i) //going through each character of the string
    {
        if(choice==str[i])
            ++ctr; //increasing frequency if true
        if(choice1==str[i])
            ++ctr; //increasing frequency if true
    }
    printf("The largest word is '%s' \nand the smallest word is '%s' \n", max, min); //showing user the result
    printf("in the string : %s",str);
    printf("The frequency of '%c/%c' is : %d\n",choice,choice1,ctr); //showing user the result
    return 0;
}
