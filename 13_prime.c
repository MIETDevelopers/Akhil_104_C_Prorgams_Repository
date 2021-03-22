/* C program to check if a
 number is prime or not*/
 
#include <math.h>// this library is used because we use sqrt 
#include <stdio.h>//preprocessor directive to include standard input output function headerfile  
int main()
{
    int n, i, flag = 1;// integer variables declaration 

    
    printf("Enter a number: \n");  // Ask user for input
 
    scanf("%d", &n);//scanf function for taking the input values from user 
 
    // Iterate from 2 to sqrt(n)
    for (i = 2; i <= sqrt(n); i++) {
 
        // If n is divisible by any number between
        // 2 and n/2, it is not prime
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
 
    if (n <= 1)
        flag = 0;
 
    if (flag == 1) {
        printf("%d is a prime number", n);
    }
    else {
        printf("%d is not a prime number", n);
    }
 
    return 0;
}