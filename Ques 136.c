//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>

enum Choice { ADD, SUBTRACT, MULTIPLY };

int main() {
    enum Choice choice = ADD;
    int a = 10, b = 5;

    switch (choice) {
        case ADD:
            printf("Result: %d\n", a + b);
            break;
        case SUBTRACT:
            printf("Result: %d\n", a - b);
            break;
        case MULTIPLY:
            printf("Result: %d\n", a * b);
            break;
    }

    return 0;
}
