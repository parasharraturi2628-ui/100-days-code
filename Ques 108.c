//Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n], answer[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for (int i = 0; i < n; i++) {
        int prod = 1;
        for (int j = 0; j < n; j++) {
            if (i != j)
                prod *= nums[j];
        }
        answer[i] = prod;
    }

    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i < n - 1)
            printf(" ");
    }
    printf("\n");

    return 0;
}
