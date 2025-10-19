//Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    char *word_start = str;
    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            reverse(word_start, &str[i - 1]);
            word_start = &str[i + 1];
        }
    }
    printf("Reversed sentence: %s", str);
    return 0;
}
