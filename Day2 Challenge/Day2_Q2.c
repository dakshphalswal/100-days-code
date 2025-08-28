//Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
#define PI 3.141592
int main() {
    int r;
    printf("Input Radius of Circle\n");
    scanf("%d", &r);
    printf("Circumference of the Circle is = %f\n", 2*PI*r);
    printf("Area of the Circle is = %f", PI*r*r);

    return 0;
}