//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n], freq[n];
    for (int i = 0; i < n; i++) freq[i] = 0;

    printf("Enter %d elements (one repeated): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (freq[arr[i]] == 1) {
            printf("Repeated element is: %d\n", arr[i]);
            return 0;
        }
        freq[arr[i]] = 1;
    }

    printf("No repeated element found.\n");
    return 0;
}
