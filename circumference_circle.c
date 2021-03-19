#include <stdio.h> //preprocessor directive to include standard input output function headerfile   
 #define PI 3.141  //define the value of PI
int main()   
{  
    float radius, circumference;  // Declaration of variables ie. radius and circumference
    printf("Enter radius of circle\n");  //printf function for printing the message in double qoutes
    scanf("%f", & radius);  //scanf function for taking the input values from user
    circumference = 2* PI * radius ;  //formula for calculating the circumfrence of circle
    printf("circumfrence of circle : %0.4f\n", circumference);  //printf function for printing the circumference of circle
	return 0;
}   
    