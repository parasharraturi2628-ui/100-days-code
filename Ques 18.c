//Write a program to assign grades based on a percentage input

#include <stdio.h>

void assignGrade(float percentage) {
    if (percentage >= 90) {
        printf("Grade: A\n");
    } else if (percentage >= 80) {
        printf("Grade: B\n");
    } else if (percentage >= 70) {
        printf("Grade: C\n");
    } else if (percentage >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }
}

int main() {
    float percentage;

    printf("Enter the percentage: ");
    scanf("%f", &percentage);

    if (percentage < 0 || percentage > 100) {
        printf("Invalid input! Percentage must be between 0 and 100.\n");
    } else {
        assignGrade(percentage);
    }

    return 0;
}
