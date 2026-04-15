#include <stdio.h>
#include <limits.h>

// Helper to find the max of two or three integers
int max(int a, int b) { return (a > b) ? a : b; }
int max3(int a, int b, int c) { return max(max(a, b), c); }

// Find the max sum that crosses the midpoint
int maxCrossingSum(int arr[], int low, int mid, int high) {
    int sum = 0;
    int left_sum = INT_MIN;
    for (int i = mid; i >= low; i--) {
        sum = sum + arr[i];
        if (sum > left_sum) left_sum = sum;
    }

    sum = 0;
    int right_sum = INT_MIN;
    for (int i = mid + 1; i <= high; i++) {
        sum = sum + arr[i];
        if (sum > right_sum) right_sum = sum;
    }

    return left_sum + right_sum;
}

// Main Divide and Conquer function
int maxSubArraySum(int arr[], int low, int high) {
    if (low == high) return arr[low];

    int mid = (low + high) / 2;

    // 1. Max in left half, 2. Max in right half, 3. Max crossing mid
    return max3(maxSubArraySum(arr, low, mid),
                maxSubArraySum(arr, mid + 1, high),
                maxCrossingSum(arr, low, mid, high));
}

int main() {
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Maximum contiguous sum is %d\n", maxSubArraySum(arr, 0, n - 1));
    return 0;
}