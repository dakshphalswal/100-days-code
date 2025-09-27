#include <stdio.h>

int main() {
    int i, j, space;
    int n = 4;  // height of upper pyramid

    // upper half (1,3,5,7 stars)
    for(i = 1; i <= n; i++) {
        // spaces
        for(space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // stars
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // lower half (5,3,1 stars)
    for(i = n - 1; i >= 1; i--) {
        // spaces
        for(space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // stars
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
