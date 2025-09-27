#include <stdio.h>

int main() {
    int i, j, space, star;

    for(i = 0; i < 5; i++) {
        // print spaces
        for(space = 0; space < i; space++) {
            printf(" ");
        }
        // print stars
        for(star = 0; star < 5 - i; star++) {
            printf("*");
        }
        printf("\n");  // move to next line
    }

    return 0;
}
