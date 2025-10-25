#include <stdio.h>

int main() {
    int arr[100], n, k;
    
    // Step 1: Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    // Step 2: Input array elements
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Step 3: Input k (size of subarray)
    printf("Enter value of k: ");
    scanf("%d", &k);
    
    // Step 4: Check if k is valid
    if(k > n) {
        printf("Subarray size k cannot be greater than array size!\n");
        return 0;
    }
    
    int maxSum = 0;
    
    // Step 5: Find sum of first subarray of size k
    for(int i = 0; i < k; i++) {
        maxSum += arr[i];
    }
    
    int windowSum = maxSum;
    
    // Step 6: Use sliding window to find maximum sum
    for(int i = k; i < n; i++) {
        windowSum = windowSum - arr[i - k] + arr[i];
        if(windowSum > maxSum)
            maxSum = windowSum;
    }
    
    // Step 7: Print result
    printf("Maximum sum of subarray of size %d is: %d\n", k, maxSum);
    
    return 0;
}
