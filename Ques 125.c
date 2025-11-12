//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[200];

    printf("Enter the filename to open: ");
    scanf("%s", filename);
    getchar(); // to consume newline left by scanf

    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter a new line of text to append: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);

    printf("Text appended successfully to %s\n", filename);
    return 0;
}
