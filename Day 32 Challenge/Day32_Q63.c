// Merge Two Arrays.

#include <stdio.h>

int main() {
    int n1, n2, i;

    // input size of first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];
    printf("Enter %d elements of first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // input size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2];
    printf("Enter %d elements of second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // merged array
    int merged[n1 + n2];
    for(i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for(i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    // print merged array
    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
