//Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int i, topIndex = 0;
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }
    return s[topIndex];
}

int main() {
    int n, i;
    scanf("%d", &n);
    struct Student s[n];
    for (i = 0; i < n; i++) {
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }
    struct Student top = getTopStudent(s, n);
    printf("%s %d %.2f", top.name, top.roll, top.marks);
    return 0;
}
