  

#include <stdio.h>

// Function returning pointer
int* fun()
{
	int A = 10;
	return (&A);
}

int main()
{
	// Declare a pointer
	int* p;

	// Function call
	p = fun();

	printf("%p\n", p);
	printf("%d\n", *p);
	return 0;
}