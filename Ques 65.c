//Search in a sorted array using binary search.

#include <stdio.h>

int main() {
    int n, i, key, low, high, mid;
    
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    
   
    printf("Enter %d elements (sorted in ascending order):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

  
    printf("Enter element to search: ");
    scanf("%d", &key);

   
    low = 0;
    high = n - 1;
    int found = 0;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element %d found at position %d (index %d)\n", key, mid + 1, mid);
            found = 1;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
