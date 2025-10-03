// Q24: Write a program to calculate an electricity bill based on units consumed.


#include <stdio.h>

int main() {
    int units;
    float bill = 0.0;

    printf("Enter the units consumed: ");
    scanf("%d", &units);

    if (units <= 50) {
        bill = units * 5.0; 
    } else if (units <= 150) {
 
        bill = (50 * 5.0) + ((units - 50) * 7.0);
    } else {
        bill = (50 * 5.0) + (100 * 7.0) + ((units - 150) * 12.5);
    }

    printf("Bill: ₹%.0f\n", bill); 
    return 0;
}
