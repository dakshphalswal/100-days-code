// Delete an element from an array.

#include <stdio.h>

int main() {
    int n, i, key, pos = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to delete: ");
    scanf("%d", &key);

    // find position of the element
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            pos = i;
            break;
        }
    }

    if(pos == -1) {
        printf("%d not found in the array.\n", key);
        return 0;
    }

    // shift elements to left
    for(i = pos; i < n - 1; i++) {
        arr[i] = arr[i+1];
    }

    n--;  // new size

    // print array
    printf("Array after deletion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
