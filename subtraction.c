#include <stdio.h>
int main()
{
    int num1,num2; //variable declaration
    printf("Enter the first number: ");
    scanf("%d",&num1);//read the first number
     printf("Enter the second number: ");
    scanf("%d",&num2);//read the second number
    int sub=num2-num1;//formula of subtraction
    printf("Differences of two numbers are: %d\n",sub);//display the result
    return 0;
}