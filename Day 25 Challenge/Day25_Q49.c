#include <stdio.h>

int main() {
    int i, j;

    for(i = 5; i >= 1; i--) {         // starting number row by row
        for(j = i; j <= 5; j++) {     // print from i to 5
            printf("%d", j);
        }
        printf("\n");   // next line
    }

    return 0;
}
