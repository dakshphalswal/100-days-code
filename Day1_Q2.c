// Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main()
{
  int a;
  int b;
  printf("Input first number\n");
  scanf("%d", &a);
  printf("Input second number\n");
  scanf("%d", &b);
  printf(" sum = %d ;\n diffrence = %d ;\n product = %d; \n ", a + b, a - b, a * b);
  if (b == 0)
  {
    printf("Division is not possible with 0");
  }else{
    printf("quotient = %d;", a/b);
  }

  return 0;
}