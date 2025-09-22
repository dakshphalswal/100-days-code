//Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int a, b, hcf, lcm, x, y, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    // Step 1: Find HCF using Euclid's Algorithm
    while(b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;

    // Step 2: Calculate LCM
    lcm = (x * y) / hcf;

    printf("LCM of %d and %d is %d\n", x, y, lcm);

    return 0;
}
