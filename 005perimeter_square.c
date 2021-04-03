#include<stdio.h> //preprocessor directive to include standard input output function headerfile
int main()
{
    float side,perimeter; // declaration of variables ie. side and perimeter
    printf("\n Enter the Length of Side : "); //printf function to dispay the message inside the double quotes
    scanf("%f",&side); //scanf function for taking the input values from user
    perimeter = 4*side ; //formula for calculating the perimeter of the square
    printf("\n perimeter of Square : %f",perimeter); //printf function for printing the perimeter of square
	return 0; 
 }