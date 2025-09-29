// Search in a sorted array using binary search.

#include <stdio.h>

int main() {
    int n, i, key;
    
    printf("Enter size of sorted array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, mid, found = 0;

    while(low <= high) {
        mid = (low + high) / 2;
        if(arr[mid] == key) {
            found = 1;
            break;
        } else if(arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if(found) {
        printf("%d is found at position %d\n", key, mid + 1);
    } else {
        printf("%d is not found in the array\n", key);
    }

    return 0;
}
