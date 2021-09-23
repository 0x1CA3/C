#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char string[64] = "My alias is pizzadude45";
    printf("\nString before -> %s", string);
    
    strcat(string, " and my other alias is broguy92!");
    printf("\nString after -> %s", string);
    EXIT_SUCCESS;
}