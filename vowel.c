#include <stdio.h>//preprocessor directive to include standard input output function headerfile 
int main()
{
    char ch;// character variable declaration
    

    printf("Enter an alphabet\n");//printf function for printing the message  ie. inside double quotation marks
    scanf("%c",&ch);//scanf function for taking the input values from user
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'  //if statement for checking the alphabet is a vowel 
    		||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    {
    	printf("%c  is a Vowel", ch);// printf function to print the vovel alphabet

    }
    else
        printf("%c is a Consonant", ch);// printf function to print the consonant alphabet
    return 0;
}