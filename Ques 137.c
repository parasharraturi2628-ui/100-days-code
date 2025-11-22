//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    enum Role r = ADMIN;

    if (r == ADMIN)
        printf("Admin Access Granted\n");
    else if (r == USER)
        printf("User Access Granted\n");
    else if (r == GUEST)
        printf("Guest Access Limited\n");

    return 0;
}
