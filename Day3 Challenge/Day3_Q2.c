//Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    printf("Input first number A\n");
    scanf("%d", &a);
    printf("Input second number B\n");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("Your Swapped numbers are A = %d B = %d" , a , b);


    return 0;
}