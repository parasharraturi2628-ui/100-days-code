//Write a program to display the day of the week based on a number (1–7) using switch-case

#include <stdio.h>

void displayDay(int day) {
    switch(day) {
        case 1:
            printf("Day 1: Sunday\n");
            break;
        case 2:
            printf("Day 2: Monday\n");
            break;
        case 3:
            printf("Day 3: Tuesday\n");
            break;
        case 4:
            printf("Day 4: Wednesday\n");
            break;
        case 5:
            printf("Day 5: Thursday\n");
            break;
        case 6:
            printf("Day 6: Friday\n");
            break;
        case 7:
            printf("Day 7: Saturday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }
}

int main() {
    int day;

    printf("Enter a number (1-7) to display the corresponding day of the week: ");
    scanf("%d", &day);

    displayDay(day);

    return 0;
}
