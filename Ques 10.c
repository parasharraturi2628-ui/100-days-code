//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Input total time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Conversion
    hours = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;

    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

    // Display result
    printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
