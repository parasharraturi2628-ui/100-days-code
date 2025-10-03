//Find the sum of main diagonal elements for a square matrix

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int a[n][n];
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i][i];  
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
