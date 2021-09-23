#include <stdio.h>
#include <stdlib.h>

int main(void) {
    struct person {
        char *name;
        int age;
    };

    struct person Me;
    Me.name = "Austin";
    Me.age = 15;

    printf("Hi I'm %s, and im %d years old!", Me.name, Me.age);
    EXIT_SUCCESS;
}