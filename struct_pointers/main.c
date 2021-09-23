#include <stdio.h>
#include <stdlib.h>

int main(void) {
    struct guy {
        char *name;
        int age;
        char *status;
    };

    struct guy *ptr_guy, guydude;
    ptr_guy = &guydude;
    
    ptr_guy->name = "Austin";
    ptr_guy->age = 15;
    ptr_guy->status = "Wealthy";

    printf("Hi, my name is %s. I'm %d and %s.", ptr_guy->name, ptr_guy->age, ptr_guy->status);
    EXIT_SUCCESS;
}