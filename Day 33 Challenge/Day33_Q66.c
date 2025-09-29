// Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, i, key, pos;

    printf("Enter size of sorted array: ");
    scanf("%d", &n);

    int arr[n+1];  // extra space for new element
    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    // find position to insert
    pos = n;  // default: end
    for(i = 0; i < n; i++) {
        if(arr[i] > key) {
            pos = i;
            break;
        }
    }

    // shift elements right
    for(i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }

    // insert element
    arr[pos] = key;
    n++;  // new size

    // print array
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
