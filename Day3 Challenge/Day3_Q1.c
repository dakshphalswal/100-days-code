//Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main() {
    int a;
    printf("Input Temperature (in Celsius) to Convert\n");
    scanf("%d", &a);
    printf("Your Temperature in Fahrenheit is %.2f", (a * 9.0 / 5.0) + 32);


    return 0;
}