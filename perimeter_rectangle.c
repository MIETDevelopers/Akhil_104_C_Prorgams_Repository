#include<stdio.h> //preprocessor directive to include standard input output function headerfile
 
int main()
{
    float length,breadth;// declaration of variables ie. length and breadth
    float perimeter;// declaration of variable ie. perimeter
 
    printf(" Enter the Length of a Rectangle : ");//printf function to dispay the message inside the double quotes
    scanf("%f",&length);//scanf function for taking the input values from user
 
    printf("\n Enter the Breadth of a Rectangle : ");//printf function to dispay the message inside the double quotes
    scanf("%f",&breadth);//scanf function for taking the input values from user
 
    perimeter = 2(length + breadth);//formula for calculating the perimeter of the rectangle
 
    printf("\n perimeter of Rectangle is : %f",perimeter);//printf function to dispay the area of rectangle
    return 0;
}