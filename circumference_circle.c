#include <stdio.h> //preprocessor directive to include standard input output function headerfile   
 #define PI 3.141  //define the value of PI
int main()   
{  
    float radius, circumfrence;  // Declaration of variables ie. radius and circumfrence
    printf("Enter radius of circle\n");  //printf function for printing the message in double qoutes
    scanf("%f", & radius);  //scanf function for taking the input values from user
    circumfrence = 2* PI * radius ;  //formula for calculating the circumfrence of circle
    printf("circumfrence of circle : %0.4f\n", circumfrence);  //printf function for printing the circumfrence of circle
	return 0;
}   
    