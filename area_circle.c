#include <stdio.h> //preprocessor directive to include standard input output function headerfile   
 #define PI 3.141  //define the value of PI
int main()   
{  
    float radius, area;  // Declaration of variables ie. radius and area
    printf("Enter radius of circle\n");  //printf function for printing the message in double qoutes
    scanf("%f", & radius);  //scanf function for taking the input values from user
    area = PI * radius * radius;  //formula for calculating the area of circle
    printf("Area of circle : %0.4f\n", area);  //printf function for printing the area of circle
	return 0;
}   
    