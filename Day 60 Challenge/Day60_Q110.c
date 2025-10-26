#include <stdio.h>

int main() {
    int arr[100], n, k;
    
    // Step 1: Take array size input
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    // Step 2: Take array elements
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Step 3: Take k input
    printf("Enter window size k: ");
    scanf("%d", &k);
    
    // Step 4: Check validity
    if(k > n) {
        printf("Window size cannot be greater than array size!\n");
        return 0;
    }
    
    printf("Maximum elements of each subarray: ");
    
    // Step 5: Loop for each subarray of size k
    for(int i = 0; i <= n - k; i++) {
        int max = arr[i];
        
        // Step 6: Find maximum in current window
        for(int j = i; j < i + k; j++) {
            if(arr[j] > max)
                max = arr[j];
        }
        
        // Step 7: Print the max element
        printf("%d ", max);
    }
    
    printf("\n");
    return 0;
}
