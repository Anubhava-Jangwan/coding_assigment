// Problem: Given an array of n integers, reverse the array in-place using two-pointer approach.

// Input:
// - First line: integer n
// - Second line: n space-separated integers

// Output:
// - Print the reversed array, space-separated

// Example:
// Input:
// 5
// 1 2 3 4 5

// Output:
// 5 4 3 2 1

// Explanation: Swap pairs from both ends: (1,5), (2,4), middle 3 stays in place

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
       printf("entered array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}