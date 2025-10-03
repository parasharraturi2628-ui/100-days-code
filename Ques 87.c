//Count spaces, digits, and special characters in a string

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int i = 0;
    int spaces = 0, digits = 0, specialChars = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    while (str[i] != '\0') {
        if (str[i] == ' ')
            spaces++;
        else if (isdigit(str[i]))
            digits++;
        else if (!isalpha(str[i]) && !isspace(str[i]))
            specialChars++;
        i++;
    }

    // Output the results
    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specialChars);

    return 0;
}
