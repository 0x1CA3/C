#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char buffer[64] = "dude";
    printf("Value in 'buffer' variable -> %s\n", buffer);
    memset(buffer, 0, sizeof(buffer));
    printf("Value in 'buffer' variable -> %s\n", buffer);
    EXIT_SUCCESS;
}