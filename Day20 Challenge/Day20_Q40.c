//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    long long bin;
    long long rev = 0, rem, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &bin);

    long long temp = bin;

    while(temp > 0) {
        rem = temp % 10;

        if(rem == 0)
            rem = 1;
        else if(rem == 1)
            rem = 0;
        else {
            printf("Invalid binary number\n");
            return 0;
        }

        rev = rev + rem * place;
        place = place * 10;
        temp = temp / 10;
    }

    printf("1's Complement = %lld\n", rev);

    return 0;
}
