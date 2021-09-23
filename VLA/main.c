#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int MAX = 5;
    char *keywords[MAX];

    keywords[0] = "guy";
    keywords[1] = "bro";
    keywords[2] = "dude";
    keywords[3] = "brother";
    keywords[4] = "brotherfromanothermother";

    for (int i = 0; i < MAX; i++) {
        printf("%s\n", keywords[i]);
    }

    EXIT_SUCCESS;
}