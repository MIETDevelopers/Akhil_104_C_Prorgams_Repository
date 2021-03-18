#include<stdio.h> //preprocessor directive to include standard input output function headerfile
int main()
{
      int num1,num2,div; // declaration of variables ie. num1,num2,div
      printf("\tEnter Two Numbers\n");//printf function to display the message on screen inside the double quotes
      printf("Enter First Number  : ");//printf function to display the message on screen inside the double quotes
      scanf("%d", &num1);//scanf function for taking the input values from user
      printf("\nEnter Second Number : ");//printf function to display the message on screen inside the double quotes
      scanf("%d",&num2);//scanf function for taking the input values from user
      div=num1/num2; // formula for division
      printf("\nDivision of %d & %d is = %d",num1,num2,div);//printf function to display the result of division
      return 0;
}

