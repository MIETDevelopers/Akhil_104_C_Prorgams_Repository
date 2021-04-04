// Program to check whether the  number is even or odd 
 
#include<stdio.h> //preprocessor directive to include standard input output function headerfile   
int main()
{
   
   int num;// integer variable declaration
 
   printf("Enter an integer: "); //printf function for printing the message in double qoutes
   scanf("%d",&num);//scanf function for taking the input values from user
 
  
   if ( num%2 == 0 ) // Modulus (%) returns remainder
      printf("%d is an even number", num);//printf function for printing the message  for even number
   else
      printf("%d is an odd number", num);//printf function for printing the message for odd number
 
   return 0;
}