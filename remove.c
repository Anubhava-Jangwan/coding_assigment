#include<stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    printf("enter the position you want to remove");
    int pos;
    scanf("%d", &pos);
    int length = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = pos - 1; i < length - 1; i++) {
        arr[i] = arr[i + 1];
    }
    length--;
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

}

