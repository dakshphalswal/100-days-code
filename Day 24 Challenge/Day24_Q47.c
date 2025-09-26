#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {        // rows
        for(j = 1; j <= i; j++) {    // stars equal to row number
            printf("*");
        }
        printf("\n");   // next line after each row
    }

    return 0;
}
