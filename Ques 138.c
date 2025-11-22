//Print all enum names and integer values using a loop.

#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    const char *names[] = { "ADMIN", "USER", "GUEST" };

    for (int r = ADMIN; r <= GUEST; r++) {
        printf("%s = %d\n", names[r], r);
    }

    return 0;
}
