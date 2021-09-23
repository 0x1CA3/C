#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *xor_encryption(char *string) {
    for (int i = 0; i < strlen(string); i++) {
        string[i] = string[i] ^ 'X';
        printf("%c", string[i]);
    }
    return string;
}

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Usage: ./%s <string>", argv[0]);
        exit(EXIT_FAILURE);
    } else {
        xor_encryption(argv[1]);
    }
    EXIT_SUCCESS;
}