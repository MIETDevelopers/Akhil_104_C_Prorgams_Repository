#include<stdio.h> //preprocessor directive to include standard input output function headerfile  
int main()
{
    int count, first_term = 0, second_term = 1, next_term, i;// integer variables declaration 
    printf("Enter the number of terms:\n"); //Ask user to input number of terms 
    scanf("%d",&count);//scanf function for taking the input values from user 
 
    printf("First %d terms of Fibonacci series:\n",count); //printf function for printing the message on output screen
    for ( i = 0 ; i < count ; i++ ) // for loop terminates when count is less than i  
    {
       if ( i <= 1 )                                         // doubt
          next_term = i;                                      //doubt
       else
       {
          next_term = first_term + second_term;               //doubt
          first_term = second_term;                           //doubt
          second_term = next_term;                            //doubt
       }
       printf("%d\n",next_term);
    }
 
    return 0;
}