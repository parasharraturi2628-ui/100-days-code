//Find the sum of each row of a matrix and store it in an array

#include <stdio.h>

int main() {
    int rows, cols;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[50][50], rowSum[50];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;  // Initialize sum for each row
        for (int j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
