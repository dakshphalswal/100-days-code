// Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long num, temp;
    int count[10] = {0};  // to store count of digits 0-9
    int i, maxCount = 0, digit;

    printf("Enter an integer number: ");
    scanf("%ld", &num);

    temp = num;
    if(temp < 0) temp = -temp;  // handle negative numbers

    // count digits
    while(temp > 0) {
        digit = temp % 10;
        count[digit]++;
        temp /= 10;
    }

    // find max occurrence
    for(i = 0; i < 10; i++) {
        if(count[i] > maxCount) {
            maxCount = count[i];
            digit = i;
        }
    }

    printf("Digit that occurs the most: %d (occurs %d times)\n", digit, maxCount);

    return 0;
}
