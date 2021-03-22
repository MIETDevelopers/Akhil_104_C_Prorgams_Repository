#include <stdio.h>//preprocessor directive to include standard input output function headerfile  
int main()
{
  int i,num,n,large=0;// integer variables declaration 

  printf("How many numbers: ");//Ask user to input how many numbers
  scanf("%d",&n);//scanf function for taking the input values from user 
  
  for(i=0; i<n; i++)// for loop from i=0 and i<n and incriment in i 
  {
    printf("\nEnter number %d: ",i+1);
    scanf("%d",&num);//scanf function for taking the input values from user 
    if(num>large) // if statement for checking the num is greater then large
    large=num; // the value of num is assigned to large
  }

  printf("\n\nThe Largest Number is %d",large);//printf function for printing the largest number
  return 0;
}