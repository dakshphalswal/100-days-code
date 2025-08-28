//write a program to calculate simple and compound intrest for given principal,rate,and time.

#include <stdio.h>
#include <math.h>  

int main() {
    float p, r, t;
    float si, ci;

    printf("Enter Principal: ");
    scanf("%f", &p);

    printf("Enter Rate of Interest: ");
    scanf("%f", &r);

    printf("Enter Time (in years): ");
    scanf("%f", &t);

    si = (p * r * t) / 100;
    ci = p * (pow((1 + r/100), t) - 1);

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);

    return 0;
}
