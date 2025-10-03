//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, i, key, pos;

    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];  

   
    printf("Enter %d elements (sorted in ascending order):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter element to insert: ");
    scanf("%d", &key);

    
    pos = n;
    for (i = 0; i < n; i++) {
        if (arr[i] > key) {
            pos = i;
            break;
        }
    }

   
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

   
    arr[pos] = key;
    n++;

    
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
