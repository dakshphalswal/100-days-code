#include <stdio.h>

int main() {
    int arr[100], n;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Next Greater Elements:\n");

    for (int i = 0; i < n; i++) {
        int next = -1; // default if no greater element found

        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break; // stop when the first greater element is found
            }
        }

        printf("%d", next);

        // print comma except after last element
        if (i != n - 1)
            printf(", ");
    }

    printf("\n");
    return 0;
}
