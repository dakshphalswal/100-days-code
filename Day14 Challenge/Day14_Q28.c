//Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;   // bada number ho sakta hai isliye long long

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i += 2) {   // sirf even numbers
        product = product * i;
    }

    printf("Product of even numbers from 1 to %d = %lld\n", n, product);

    return 0;
}
