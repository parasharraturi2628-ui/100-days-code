//Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    int len = strlen(name);
    if (name[len - 1] == '\n')
        name[len - 1] = '\0';
    char *token = strtok(name, " ");
    while (token != NULL) {
        if (strchr(name, ' ') == NULL || strtok(NULL, " ") == NULL) {
            printf("%s", token);
            break;
        } else {
            printf("%c. ", token[0]);
            token = strtok(NULL, " ");
            if (token != NULL && strtok(NULL, " ") == NULL) {
                printf("%s", token);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}
