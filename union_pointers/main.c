#include <stdio.h>
#include <stdlib.h>

int main(void) {
    union dude {
        int age;
        char *name;
        char *hobby;
    };

    union dude *ptr_dude, bro;
    ptr_dude = &bro;

    ptr_dude->age = 15;
    ptr_dude->name = "Austin";
    ptr_dude->hobby = "coding";

    EXIT_SUCCESS;
}