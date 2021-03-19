#include <stdio.h> //preprocessor directive to include standard input output function headerfile
#include <math.h> //preprocessor directive to include math function(ie. sqrt) headerfile

int main() {
	float x1, y1, x2, y2, gdistance; // declaration of variables
	printf("Input x1: ");//printf function to display the message inside the double quotes
	scanf("%f", &x1);//scanf function for taking the input values from user
	printf("Input y1: ");//printf function to display the message inside the double quotes
	scanf("%f", &y1);//scanf function for taking the input values from user
     printf("Input x2: ");//printf function to display the message inside the double quotes
	scanf("%f", &x2);//scanf function for taking the input values from user
	printf("Input y2: ");//printf function to display the message inside the double quotes
	scanf("%f", &y2);//scanf function for taking the input values from user
	gdistance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));// formula for calculating the gdistance
	printf("Distance between the given points: %f", sqrt(gdistance));//printf function to display the gdistance
	return 0;
}