/*Robert Petra
Write a program that asks the user if she wants to square a number or take the square root of a number.
Depending on the user's choice:
(1) call a function called mysquareroot that inputs a number from the user and displaysits square root.
(2) call a function called myperfectsquare that will square the number and display the squared number.*/
#include<stdio.h> //header
#include<math.h> //header
float myperfectsquare(float num1); //function declarations
float mysquareroot(float num1);
float main()
{
    float a,decide,square,root; //variable declarations
    printf("Please enter a number that you want to sqaure or take the root of\n"); //asking user for number
    scanf("%f",&a); //getting number from user
    printf("Press 1 to square the number or 2 to take the root of it\n"); //asking user to choose for root or square
    scanf("%f",&decide); //getting users choice
    square = myperfectsquare(a); //calling to function
    root = mysquareroot(a); //calling to function
    if (decide==1) //first choice
    {
        printf("The number you entered squared is: %.3f\n",square); //telling user their number squared
    }
    else
    {
        if(decide==2) //second choice
        {
            printf("The number you entered taken the root of is: %.3f\n",root); //telling user their number taken the root of
        }
    }
    return 0; //ending main function
}
float myperfectsquare(float num1) //function definition
{
    float result;
    result = num1*num1; //squaring number
    return result; //returning number to main function
}
float mysquareroot(float num1) //function definition
{
    float result1;
    result1 = sqrt(num1); //taking the root of
    return result1; //returning number to main function
}
