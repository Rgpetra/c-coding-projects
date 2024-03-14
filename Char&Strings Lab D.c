/*Robert Petra 
This program reads a file and removes all the spaces between words and then prints the string to screen.
Finally, it reads a file(same one as above) and replaces every space with a "#" symbol and writes it to a new file*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],i,x; //declaring variables
    FILE*plate; //pointing to plate file
    FILE*hash; //pointing to hash file
    plate=fopen("nugs.txt","r"); //opening file nugs to read from it
    hash=fopen("tag.txt","w"); //opening file tag to write in it
    for(x=0;x<22;++x) //turning data file into string
    {
    fscanf(plate,"%c",&i); //reading values from data file
    str[x]=i; //turning data file into string
    }
    for (i = 0; i < strlen(str); i++) //repeats for every character in string
    {
        while (i < strlen(str) && !isspace(str[i])) //staying inside string length and skips blank spaces
        {
            printf("%c",str[i]);//showing user the string with no spaces
            i++; //stopping loop
        }
    }
    x=0; //reseting x
    str[x] != '\0';
    do //replacing space with #
    {
        if(str[x]==' ') //parameters for replacement
        {
            str[x]='#';
            fprintf(hash,"%c",str[x]);//replacing spaces with #s
        }
        else
        {
            fprintf(hash,"%c",str[x]); //printing everything else into file
        }
        x++; //limiting loop
    }
    while(x<22); //replacing space with a #
    return 0;
}