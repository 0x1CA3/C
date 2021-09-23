#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char string[64] = "octopizza";
    for (int i = 0; i < strlen(string); i++) {
        printf("%c", string[i]);
    }
    EXIT_SUCCESS;
}