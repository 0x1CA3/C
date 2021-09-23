#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *buffer;
    buffer = (char *)malloc(32 * sizeof(char));
    
    printf("\nEnter a message >> ");
    scanf("%s", buffer);
    
    printf("Your Message -> %s\n", buffer);
    EXIT_SUCCESS;
}