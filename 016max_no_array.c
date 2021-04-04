#include <stdio.h>//preprocessor directive to include standard input output function headerfile  

int main()
{    
    int array[100], maximum, size, c, location = 1;// integer variables declaration and array which contains 100 values
    
    printf("Enter the number of elements in array\n");// Ask user for input
    scanf("%d", &size);//scanf function for taking the input values from user 
    
    printf("Enter %d integers\n", size);// Ask user for input
    
    for (c = 0; c < size; c++)
scanf("%d", &array[c]);//scanf function for taking the input values from user 
    
    maximum = array[0];
    
    for (c = 1; c < size; c++)
    {
        if (array[c] > maximum)
        {
        maximum  = array[c];
        location = c+1;
        }
    }
    
    printf("Maximum element is present at location %d and it's value is %d.\n", location, maximum);// printf function for printing the max element and its location
    
    return 0;    
}