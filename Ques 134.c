//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    enum Status s = SUCCESS;

    if (s == SUCCESS)
        printf("Operation Successful\n");
    else if (s == FAILURE)
        printf("Operation Failed\n");
    else if (s == TIMEOUT)
        printf("Operation Timed Out\n");

    return 0;
}
