// Find the sum of array elements.

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];  // array declaration

    // input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // add to sum directly
    }

    // print sum
    printf("Sum of array elements = %d\n", sum);

    return 0;
}
