//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    double numerator = 2.0, denominator = 3.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += numerator / denominator;

        numerator += 2;     // next even number
        denominator += 4;   // denominator increases by 4
    }

    printf("Sum of the series up to %d terms = %.2lf\n", n, sum);

    return 0;
}
