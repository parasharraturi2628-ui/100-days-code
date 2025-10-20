//Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

#include <stdio.h>

int main() {
    int n, target, first = -1, last = -1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter sorted elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    printf("Enter target: ");
    scanf("%d", &target);
    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1)
                first = i;
            last = i;
        }
    }
    if (first == -1)
        printf("-1, -1\n");
    else
        printf("First occurrence: %d (index %d)\nLast occurrence: %d (index %d)\n", nums[first], first, nums[last], last);
    return 0;
}
