#include <stdio.h>
#include <stdlib.h>

int main(void) {
    union dude {
        int age;
        char *name;
        char *hobby;
    };

    union dude bro;

    bro.age = 15;
    bro.name = "Austin";
    bro.hobby = "coding";

    EXIT_SUCCESS;
}