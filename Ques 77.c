//Check if the elements on the diagonal of a matrix are distinct

#include <stdio.h>

int main() {
    int n, m;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    int a[n][m];
    printf("Enter the matrix elements:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int distinct = 1; 
    for(int i = 0; i < n && i < m; i++) {
        for(int j = i+1; j < n && j < m; j++) {
            if(a[i][i] == a[j][j]) {
                distinct = 0;
                break;
            }
        }
        if(!distinct) break;
    }

    if(distinct)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are NOT distinct.\n");

    return 0;
}
