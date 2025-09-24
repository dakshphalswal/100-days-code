//Write a program to check if a number is a strong number.

#include <stdio.h>

int main() {
    int num, temp, digit, sum = 0, fact, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp > 0) {
        digit = temp % 10;

        // calculate factorial of digit
        fact = 1;
        for(i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum += fact;     // add factorial to sum
        temp = temp / 10;
    }

    if(sum == num) {
        printf("%d is a Strong Number\n", num);
    } else {
        printf("%d is not a Strong Number\n", num);
    }

    return 0;
}
