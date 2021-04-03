//Program to Multiplication of two numbers
#include<stdio.h>//preprocessor directive to include standard input output function headerfile
int main()
{
	int num1,num2,product;// declaration of variables ie. num1,num2,product
	printf("Enter two numbers:");//printf function to display the message on screen inside the double quotes
	scanf("%d %d",&num1,&num2);//scanf function for taking the input values from user
	product=num1*num2;// calculating the product of two numbers
	printf("Product of two numbers: %d",product);//printf function to display the message on screen inside the double quotes
	return  0;
}
				