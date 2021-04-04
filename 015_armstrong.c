#include<stdio.h>//preprocessor directive to include standard input output function headerfile  
 
void main()
{
int n,num,r,ans=0;// integer variables declaration 
 
printf("Enter a positive integer:  ");// Ask user for input
scanf("%d",&num);//scanf function for taking the input values from user 
n=num; // here the value of num is transfer to n
 
/* Loop to calculate the sum of the cubes of its digits */
while(n>0)
{
r=n%10;
ans=ans+r*r*r;
n=n/10;
}
 
/* if else condition to print Armstrong or Not */
if(ans==num)
printf("%d is an Armstrong number.",num);//printf function for printing the number is armstrong
else
printf("%d is not an Armstrong number.",num);//printf function for printing the number is not prime
} 