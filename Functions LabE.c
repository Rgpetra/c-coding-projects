/*Robert Petra
program that asks the user if he will be giving you the angle (in degrees) or the two sides of an angle in a right triangle.
Based on what the user will give you do the following:
1. the user is giving an angle, create a function called degreestoradians.
    This function will convert degrees to radians.
    Then you will call the sine, cosine and  tangent functions in the math.h library
    to determine the the values of those three trigonometric functions and display the values up to four decimal places to the screen.
2. the user chooses to give the 2 sides of a right triangle,
    you will create a function called mytangent that will calculate and display the tangent of the triangle to four decimal places.*/
#include<stdio.h>
#include<math.h>
float degreestoradians(float DtR);//declaring function
float mytangent(float a,float b); //declaring function
float main()
{
    float choice,angle,angleR,s1,s2,tangent,sin1,cos1,tan1; //declaring variables
    do
    { //asking user to choose
    printf("Please enter\n1. if you will be giving the angle(in degrees) or \n2. if you will be giving 2 sides of a right triangle(in inches)\n");
    scanf("%f",&choice); //user choosing what to do
    if(choice==1) //first choice
    {
        printf("You have chosen to give the angle(in degrees).\nPlease enter the angle.\n"); //telling user what they have chosen
        scanf("%f",&angle); //getting angle from user
        angleR = degreestoradians(angle); //calling to degreetoradian function
        sin1=sin(angleR); //finding sin cos and tan of radian
        cos1=cos(angleR);
        tan1=tan(angleR);
        printf("Here is the angle in radians %.4f\n",angleR); //showing user the angle in radians
        printf("sine of the angle: %.4f radians\n",sin1); //showing user the sin cos and tan of the angle
        printf("cosine of the angle: %.4f radians\n",cos1);
        printf("tangent of the angle: %.4f radians\n",tan1);
    }
    if(choice==2) //second choice
    {   //telling user what they have chosen
        printf("You have chosen to give 2 sides of a right triangle(in inches)\nPlease enter the the side opposite of theta then the side adjacent to theta.\n");
        scanf("%f",&s1); //getting opposite side
        scanf("%f",&s2); //getting adjacent side
        tangent = mytangent(s1,s2); //calling to tangent function
        printf("The tangent of the theta is: %.4f radians\n",tangent); //telling user the tangent of theta of the sides they entered
    }
    }
    while(choice!=1&&choice!=2);
    return 0;
}
float degreestoradians(float DtR) //defining function
{
    float result;
    result = (DtR*3.14159265358979323846)/180;
    return result; //returning result
}
float mytangent(float a,float b) //defining function
{
    float result1;
    result1 = tan((a/b));
    return result1; //returnin result
}
