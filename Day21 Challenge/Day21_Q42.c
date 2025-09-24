//Write a program to check if a number is a perfect number.

#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 1; i <= num/2; i++) {  // number ke half tak hi check karenge
        if(num % i == 0) {
            sum += i;
        }
    }

    if(sum == num) {
        printf("%d is a Perfect Number\n", num);
    }
    else {
        printf("%d is not a Perfect Number\n", num);
    }

    return 0;
}
