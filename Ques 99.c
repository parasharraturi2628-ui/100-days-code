//Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char date[15], day[3], month[3], year[5];
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    printf("Enter date in format dd/mm/yyyy: ");
    scanf("%s", date);
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strncpy(year, date + 6, 4);
    year[4] = '\0';
    int m = atoi(month);
    if (m < 1 || m > 12) {
        printf("Invalid month.\n");
        return 0;
    }
    printf("Converted date: %s-%s-%s\n", day, months[m - 1], year);
    return 0;
}
