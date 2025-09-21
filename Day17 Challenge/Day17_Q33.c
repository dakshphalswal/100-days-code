// Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>   // for pow() function

int main() {
    int num, temp, digit, sum = 0, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Step 1: count digits
    while(temp > 0) {
        count++;
        temp = temp / 10;
    }

    temp = num;

    // Step 2: sum of powers of digits
    while(temp > 0) {
        digit = temp % 10;
        sum = sum + pow(digit, count);
        temp = temp / 10;
    }

    // Step 3: check Armstrong or not
    if(sum == num) {
        printf("%d is an Armstrong number\n", num);
    }
    else {
        printf("%d is not an Armstrong number\n", num);
    }

    return 0;
}
