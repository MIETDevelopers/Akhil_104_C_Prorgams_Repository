#include<stdio.h> //preprocessor directive to include standard input output function headerfile
 
int main()
{
    float length,breadth;// declaration of variables ie. length and breadth
    float area;// declaration of variable ie. area
 
    printf(" Enter the Length of a Rectangle : ");//printf function to dislpay the message inside the double quotes
    scanf("%f",&length);//scanf function for taking the input values from user
 
    printf("\n Enter the Breadth of a Rectangle : ");//printf function to dislpay the message inside the double quotes
    scanf("%f",&breadth);//scanf function for taking the input values from user
 
    area = length * breadth;//formula for calculating the area of the rectangle
 
    printf("\n Area of Rectangle is : %f",area);//printf function to display the area of rectangle
    return 0;
}