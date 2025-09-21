// Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int num, temp, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;  // save original number

    while(num > 0) {
        digit = num % 10;         
        rev = rev * 10 + digit;   // make reverse number
        num = num / 10;
    }

    if(temp == rev) {
        printf("%d is a Palindrome\n", temp);
    }
    else {
        printf("%d is not a Palindrome\n", temp);
    }

    return 0;
}
