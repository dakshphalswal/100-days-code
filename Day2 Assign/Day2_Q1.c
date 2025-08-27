//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main() {
    int l;
    int b;
    printf("Input Length\n");
    scanf("%d", &l);
    printf("Input Breath\n");
    scanf("%d", &b);
    printf("Perimeter of the rectangle is = %d\n", 2*(l+b));
    printf("Area of the rectangle is = %d", l*b);

    return 0;
}
