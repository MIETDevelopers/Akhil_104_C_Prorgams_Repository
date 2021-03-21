#include<stdio.h>//preprocessor directive to include standard input output function headerfile  
int main ()
{
 
  int first = 0, second = 1, third, i, n;// integer variables declaration 
 
  printf ("Enter the length of the fibonacci series \n");//Ask user to input number of terms 
 
  scanf ("%d", &n);//scanf function for taking the input values from user 
 
  printf ("The Fibonacci series is :\n");//printf function for printing the message on output screen
 
  printf ("%d%d", first, second);//printf function for printing the first and second element
 
  for (i = 2; i <= n; i++) //for loop starts from 2 because i=0and1 are printed above
 
    {
 
      third = first + second; // third element = the sum of first and second 
 
      printf ("%d ", third);//printf function for printing the third element
 
      first = second;// now the second element is in place of first element
 
      second = third;// here the third element is in the place of second and soo on to (n)
 
    }
 
  return 0;
 
}