//Write a program to swap the first and last digit of a number

#include <stdio.h>
#include <math.h>

int swapFirstLast(int num) {
    int original = num;
    int last_digit = num % 10;

    int digits = 0;
    int temp = num;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }

    if (digits == 1)
        return num;

    int first_digit = num / (int)pow(10, digits - 1);

    num = num % (int)pow(10, digits - 1);
    
    num = num / 10;

    int result = last_digit * (int)pow(10, digits - 1) + num * 10 + first_digit;

    return result;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    int swapped = swapFirstLast(number);
    printf("Number after swapping first and last digits: %d\n", swapped);

    return 0;
}
