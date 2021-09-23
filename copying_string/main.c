#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char buffer[64];
    strcpy(buffer, "brodude");
    printf("Value -> %s", buffer);
    EXIT_SUCCESS;
}