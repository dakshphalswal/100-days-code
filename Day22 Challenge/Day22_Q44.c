//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    double numerator = 1.0, denominator = 1.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += numerator / denominator;

        numerator += 2;      // next odd number
        denominator += 2;    // next even number
    }

    printf("Sum of the series up to %d terms = %.2lf\n", n, sum);

    return 0;
}
