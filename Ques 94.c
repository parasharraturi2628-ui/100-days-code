//Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\n') {
            word[j] = '\0';
            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }
            j = 0;
        } else {
            word[j++] = str[i];
        }
        i++;
    }
    printf("Longest word: %s\n", longest);
    return 0;
}
