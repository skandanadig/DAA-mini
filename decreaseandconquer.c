#include <stdio.h>
#include <stdlib.h>

// Decrease and Conquer approach [cite: 20]
int findFixedPoint(int arr[], int low, int high)
{
    if (high < low)
        return -1;

    int mid = low + (high - low) / 2;

    if (arr[mid] == 2 * mid)
        return mid;

    // If arr[mid] < 2*mid, target must be on the right
    if (arr[mid] < 2 * mid)
        return findFixedPoint(arr, mid + 1, high);
    else
        return findFixedPoint(arr, low, mid - 1);
}

int main()
{
    int n;

    printf("Enter the size of the sorted array: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &arr[i]) != 1)
        {
            printf("Invalid input.\n");
            free(arr);
            return 1;
        }
    }

    int result = findFixedPoint(arr, 0, n - 1);
    if (result != -1)
        printf("Element A[i]=2i found at index: %d\n", result);
    else
        printf("No such element exists.\n");

    free(arr);
    return 0;
}