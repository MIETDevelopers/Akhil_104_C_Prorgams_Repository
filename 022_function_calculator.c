
#include <stdlib.h>
#include <stdio.h>

double addition(double a,double c);
double subtraction(double a, double c);
double multiplication(double a, double c);
double division(double a, double c);



int main()
{
  double z=0, a, c;
  char b;
  printf("Insert your Numbers to calculate!");
  scanf_s("%lf", &a);
  scanf_s("%c", &b);
  scanf_s("%lf", &c);
  if (b == '+')
  {
    addition(a, c);
  }
  if (b == '-')
  {
    subtraction(a, c);
  }
  if (b == '*')
  {
    multiplication(a, c);
  }
  if (b == '/')
  {
    division(a, c);
  }
  printf("Result:  %lf", z);
  system("pause");
}

double addition(double a, double c)
{
  double z;
  z = a + c;
  return(z);
}

double subtraction(double a, double c)
{