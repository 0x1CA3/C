#include <stdio.h>
#include <stdlib.h>

void print_message(char message[64]) {
    printf("Message -> %s", message);
}

int main(void) {
    char message[64] = "guydude";
    print_message(message);
    EXIT_SUCCESS;
}