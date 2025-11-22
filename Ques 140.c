//Define a struct with enum Gender and print person's gender.

#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[20];
    enum Gender gender;
};

int main() {
    struct Person p = {"Rahul", MALE};

    if (p.gender == MALE)
        printf("Gender: MALE\n");
    else if (p.gender == FEMALE)
        printf("Gender: FEMALE\n");
    else
        printf("Gender: OTHER\n");

    return 0;
}
