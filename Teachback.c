/*Robert Petra
This program asks the user for their test grades, final exam grade, and practical exam grade and gives them their grade letter.*/
#include<stdio.h>
main()
{
    //declaring variables
    int test,final,pract,grade;
    //asking user for numbers and getting numbers
    printf("Please enter the average of your 3 test grades.\n");
    scanf("%i",&test);
    printf("Now the grade of your final exam.\n");
    scanf("%i",&final);
    printf("And now the grade of your practical exam.\n");
    scanf("%i",&pract);
    //calculating grade
    grade=((test*50)/100)+((final*25)/100)+((pract*25)/100);
    //displaying numeral grade to user
    printf("Your grade point average is %i\n",grade);
    //switch statement
    switch(grade)
    {
        case 100:
        case 99:
        case 98:
        case 97:
        case 96:
        case 95:
        case 94:
        case 93:
        case 92:
        case 91:
        case 90:
            //A
            printf("Your grade is an A.\n");
            break;
        case 89:
        case 88:
        case 87:
        case 86:
        case 85:
        case 84:
        case 83:
        case 82:
        case 81:
        case 80:
            //B
            printf("Your grade is a B.\n");
            break;
        case 79:
        case 78:
        case 77:
        case 76:
        case 75:
        case 74:
            //C
            printf("Your grade is a C.\n");
            break;
        case 73:
        case 72:
        case 71:
        case 70:
            //D
            printf("Your grade is a D.\n");
            break;
        default:
            //F
            printf("Your grade is an F.\n");
            break;
        
    }
    return 0;
}
