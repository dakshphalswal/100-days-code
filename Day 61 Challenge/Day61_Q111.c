#include <stdio.h>

int main() {
    int arr[100], n, k;
    
    // Step 1: Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    // Step 2: Input array elements
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Step 3: Input k (window size)
    printf("Enter window size k: ");
    scanf("%d", &k);
    
    // Step 4: Check validity
    if(k > n) {
        printf("Window size cannot be greater than array size!\n");
        return 0;
    }
    
    printf("First negative numbers in each subarray: ");
    
    // Step 5: Loop for each subarray
    for(int i = 0; i <= n - k; i++) {
        int found = 0;  // flag to check if any negative is found
        
        // Step 6: Search for first negative in current window
        for(int j = i; j < i + k; j++) {
            if(arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }
        
        // Step 7: If no negative found, print 0
        if(found == 0)
            printf("0 ");
    }
    
    printf("\n");
    return 0;
}
