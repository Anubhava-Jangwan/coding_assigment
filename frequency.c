// Problem: Given an array of integers, count the frequency of each distinct element and print the result.

// Input:
// - First line: integer n (size of array)
// - Second line: n integers

// Output:
// - Print each element followed by its frequency in the format element:count

// Example:
// Input:
// 5
// 1 2 2 3 1

// Output:
// 1:2 2:2 3:1
#include <stdio.h>
int main (){
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i < n; i++){
        int count =0;
        int visited = 0;
        for (int j=0; j < i; j++){
            if (arr[j] == arr[i]){
                visited = 1;
                break;
            }
        }
        if (visited == 1){
            continue;
        }
        int temp = arr[i];
        for (int j=0; j < n; j++){
            if (arr[j] == temp){
                count++;
            }
        }

        printf("%d:%d ", temp, count);
    }


}
