//Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int num, digit;
    long long product = 1;
    int hasOdd = 0;   // check karne ke liye ki odd digit hai ya nahi

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0) {
        digit = num % 10;         // last digit nikalna
        if(digit % 2 != 0) {      // agar odd hai
            product = product * digit;
            hasOdd = 1;
        }
        num = num / 10;           // number chhota karna
    }

    if(hasOdd)
        printf("Product of odd digits = %lld\n", product);
    else
        printf("No odd digits in the number\n");

    return 0;
}
