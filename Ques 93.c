//Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count[26] = {0};
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    if (strlen(str1) != strlen(str2)) {
        printf("Strings are not anagrams.\n");
        return 0;
    }
    for (int i = 0; str1[i] != '\0'; i++) {
        count[str1[i] - 'a']++;
        count[str2[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Strings are not anagrams.\n");
            return 0;
        }
    }
    printf("Strings are anagrams.\n");
    return 0;
}
