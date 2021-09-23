#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char string[64] = "Dudebro94";
    char *new_string = strtok(string, "4"); 
    printf("New String -> %s", new_string);
    EXIT_SUCCESS;
}