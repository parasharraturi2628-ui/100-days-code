//Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int num, digit, product = 1;
    int odd_found = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        digit = num % 10;
        if (digit % 2 != 0) {  // Check if digit is odd
            product *= digit;
            odd_found = 1;
        }
        num /= 10;
    }

    if (odd_found) {
        printf("Product of odd digits: %d\n", product);
    } else {
        printf("No odd digits found. Product is 0.\n");
    }

    return 0;
}
