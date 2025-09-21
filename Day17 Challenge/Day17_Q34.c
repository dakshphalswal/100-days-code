// Write a program to check if a number is prime.

#include <stdio.h>

int main() {
    int num, i, isPrime = 1;   // assume number prime

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 1) {
        isPrime = 0;   // 1 and negative numbers are not prime
    } 
    else {
        for(i = 2; i <= num/2; i++) {
            if(num % i == 0) {
                isPrime = 0;   // if number found divisible so that's not prime
                break;
            }
        }
    }

    if(isPrime == 1) {
        printf("%d is a Prime number\n", num);
    }
    else {
        printf("%d is not a Prime number\n", num);
    }

    return 0;
}
