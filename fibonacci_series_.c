#include<stdio.h>    //preprocessor directive to include standard input output function headerfile  
int main()    
{    
 int n1=0,n2=1,n3,i,number;    // integer variables declaration 
 printf("Enter the number of elements:");    //Ask user to input number of terms 
 scanf("%d",&number);    //scanf function for taking the input values from user 
 printf("\n%d %d",n1,n2);//printing 0 and 1    
 for(i=2;i<number;++i)//loop starts from 2 because 0 and 1 are already printed    
 {    
  n3=n1+n2;    
  printf(" %d",n3);    // method of making fiboncee series 
  n1=n2;    
  n2=n3;    
 }  
  return 0;  
 }    