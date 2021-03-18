#include<stdio.h> //preprocessor directive to include standard input output function headerfile
int main()
{
    float side,area; // declaration of variables ie. side and area
    printf("\n Enter the Length of Side : "); //printf function to dispay the message inside the double quotes
    scanf("%f",&side); //scanf function for taking the input values from user
    area = side * side ; //formula for calculating the area of the square
    printf("\n Area of Square : %f",area); //printf function for printing the area of square
	return 0; 
 }