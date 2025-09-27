#include <stdio.h>

int main() {
    int i, j, space;

    // upper half (1,3,5,7,9 stars)
    for(i = 1; i <= 5; i++) {
        // print spaces
        for(space = 1; space <= 5 - i; space++) {
            printf(" ");
        }
        // print stars
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // lower half (7,5,3,1 stars)
    for(i = 4; i >= 1; i--) {
        // print spaces
        for(space = 1; space <= 5 - i; space++) {
            printf(" ");
        }
        // print stars
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
