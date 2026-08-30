// Problem: Read a string and check if it is a palindrome using two-pointer comparison.

// Input:
// - Single line: string s

// Output:
// - Print YES if palindrome, otherwise NO

// Example:
// Input:
// level

// Output:
// YES

// Explanation: String reads same forwards and backwards

#include <string.h>
int main(){
    char str[100];
    printf("enter a string:\n");
    scanf("%s",str);
    int len = strlen(str);
    int left = 0;
    int right = len - 1;
    int is_palindrome = 1; // Assume it is a palindrome

    while(left < right){
        if(str[left] != str[right]){
            is_palindrome = 0; // Not a palindrome
            break;
        }
        left++;
        right--;
    }

    if(is_palindrome){
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}