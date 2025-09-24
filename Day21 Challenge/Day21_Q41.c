//Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;             // last digit nikalna
    digits = (int)log10(num);    // total digits - 1
    first = num / pow(10, digits);  // first digit nikalna

    swapped = last * pow(10, digits) + (num % (int)pow(10, digits) - last) + first;

    printf("Number after swapping first and last digit = %d\n", swapped);

    return 0;
}
