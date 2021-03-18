#include<stdio.h>//preprocessor directive to include standard input output function headerfile
int main() {
int a, b, sum;//variable declaration
printf("\nEnter two no: ");//printf function to display the message on screen inside the double quotes
scanf("%d %d", &a, &b);//read the first number and second number
sum = a + b;//formula of addition
printf("Sum : %d", sum);//printf function to display the sum of two numbers
return(0);