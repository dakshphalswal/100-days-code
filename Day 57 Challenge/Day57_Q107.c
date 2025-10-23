#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Previous Greater Elements:\n");

    for (int i = 0; i < n; i++) {
        int prev = -1;  // default if no greater element found

        // look to the left of current element
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break;  // stop when first greater element is found
            }
        }

        printf("%d", prev);

        // print comma except for last element
        if (i != n - 1)
            printf(", ");
    }

    printf("\n");
    return 0;
}
