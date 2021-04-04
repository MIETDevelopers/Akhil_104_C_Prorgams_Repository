#include<stdio.h>  //preprocessor directive to include standard input output function headerfile  
int main()    
{    
 int i,fact=1,number;  // intesger variables declaration (i,fact,number)  and initializing fact=1
 printf("Enter a number: ");    //printf function for printing the message  ie. inside double quotation marks
 scanf("%d",&number);   //scanf function for taking the input values from user 
 for(i=1;i<=number;i++){    // for loop terminates when number is less than i       
    fact=fact*i;    //formula of factorail
    }    
  printf("Factorial of %d is: %d",number,fact);   //printf function for printing the  Factorial of the number 
return 0;  
}   