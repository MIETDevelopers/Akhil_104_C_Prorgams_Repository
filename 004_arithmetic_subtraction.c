#include <stdio.h>//preprocessor directive to include standard input output function headerfile
int main()
{
    int num1,num2; // integer variable declaration
    printf("Enter the first number: ");  //printf function for printing the message  ie. inside double quotation marks
    scanf("%d",&num1);//read the first number
     printf("Enter the second number: ");  //printf function for printing the message  ie. inside double quotation marks
    scanf("%d",&num2);//read the second number
    int sub=num2-num1;//formula of subtraction
    printf("Differences of two numbers are: %d\n",sub);//display the result
    return 0;
}