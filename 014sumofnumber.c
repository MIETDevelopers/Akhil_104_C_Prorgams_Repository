/* C Program to Find Sum of Digits of a Number using While Loop */

#include <stdio.h>//preprocessor directive to include standard input output function headerfile  

int main()
{
  int Number, Reminder, Sum=0;// integer variables declaration 

  printf("\n Please Enter any number\n");// Ask user for input
  scanf("%d", &Number);//scanf function for taking the input values from user 

  while(Number > 0)
  {
     Reminder = Number % 10;// when the number is divide by 10 the last digit of number is its reminer
     Sum = Sum+ Reminder; // for first time the value of the sum is 0 and it changes later
     Number = Number / 10;
  }

  printf("\n Sum of the digits of Given Number = %d", Sum);//printf function for printing the sum of the number

  return 0;
}