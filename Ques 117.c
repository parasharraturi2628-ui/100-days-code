//Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the size of first array (m): ");
    scanf("%d", &m);
    printf("Enter the size of second array (n): ");
    scanf("%d", &n);

    int arr1[m], arr2[n], merged[m + n];

    printf("Enter %d elements of first sorted array: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d elements of second sorted array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < m) {
        merged[k++] = arr1[i++];
    }

    while (j < n) {
        merged[k++] = arr2[j++];
    }

    printf("Merged sorted array: ");
    for (int x = 0; x < m + n; x++) {
        printf("%d ", merged[x]);
    }

    printf("\n");
    return 0;
}
