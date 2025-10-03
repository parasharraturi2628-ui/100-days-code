//Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0};  // To store frequency of digits 0–9
    int digit, maxDigit = 0, maxFreq = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    if (num < 0) {
        num = -num;  // Handle negative numbers
    }

   
    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }

    printf("The digit that occurs the most times is %d (occurs %d times).\n", maxDigit, maxFreq);

    return 0;
}
