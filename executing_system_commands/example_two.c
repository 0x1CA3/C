#include <stdio.h>
#include <stdlib.h>

/*
There are 2 main ways to execute system commmands in C, one way is by using system(); and
the other way is by using popen();
I will show you both.
*/

int main(void) {
    char command_data[5000];
    FILE * command = popen("whoami", "r");
    if (command == NULL) {
        printf("\nFailed to execute system command!");
    } else {
        while (fgets(command_data, sizeof(command_data), command) != NULL) {
            fputs(command_data, stdout);
        }
    }
    pclose(command);
    EXIT_SUCCESS
}