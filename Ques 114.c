//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.


#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int lastIndex[256];
    int start = 0, maxLen = 0;

    scanf("%s", s);

    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    for (int end = 0; s[end] != '\0'; end++) {
        if (lastIndex[(unsigned char)s[end]] >= start)
            start = lastIndex[(unsigned char)s[end]] + 1;

        lastIndex[(unsigned char)s[end]] = end;

        if (end - start + 1 > maxLen)
            maxLen = end - start + 1;
    }

    printf("%d", maxLen);
    return 0;
}
