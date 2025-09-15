// Write a program to reverse a given number.

#include <stdio.h>

int main() {
    int num, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0) {
        digit = num % 10;          // last digit nikaalna
        rev = rev * 10 + digit;    // reverse me add karna
        num = num / 10;            // number chhota karna
    }

    printf("Reversed number = %d\n", rev);

    return 0;
}
