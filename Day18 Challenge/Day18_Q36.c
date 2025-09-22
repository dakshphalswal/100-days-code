//Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b;  // original numbers save 

    // Euclid's Algorithm
    while(b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF (GCD) of %d and %d is %d\n", x, y, a);

    return 0;
}
