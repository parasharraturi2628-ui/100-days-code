//Find the second largest element in an array.

#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100], n, i;
    int first, second;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n < 2) {
        printf("Array must have at least 2 elements.\n");
        return 0;
    }

    first = second = INT_MIN;

    for (i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN)
        printf("There is no second largest element (all elements are equal).\n");
    else
        printf("The second largest element is %d\n", second);

    return 0;
}
