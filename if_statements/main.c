#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int number = 4;
    if (number == 4) {
        printf("Variable 'Number' is 4!\n");
    } else {
        printf("Variable Number is NOT 4!\n");
    }
    
    char string[64] = "BroGuy";
    if (strcmp(string, "BroGuy") == 0) {
        printf("This guy is a BroGuy!\n");
    } else if (strcmp(string, "BroDude") == 0) {
        printf("This guy is a BroDude!\n");
    } else {
        printf("This guy isn't a BroGuy or a BroDude!\n");
    }
    EXIT_SUCCESS;
}