#include <stdio.h>
#include <stdlib.h>

/*
There are 2 main ways to execute system commmands in C, one way is by using system(); and
the other way is by using popen();
I will show you both.
*/

int main(void) {
    system("whoami");
    EXIT_SUCCESS;
}