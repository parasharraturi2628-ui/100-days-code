//Create an enum for months and print how many days each month has.

#include <stdio.h>

enum Month { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE,
             JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

int main() {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const char *names[] = {"JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE",
                           "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"};

    for (int m = JANUARY; m <= DECEMBER; m++) {
        printf("%s has %d days\n", names[m], days[m]);
    }

    return 0;
}
