#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char file_lines[5000];
    FILE * file = fopen("main.txt", "r");
    if (file == NULL) {
        printf("File not found!\n");
    } else {
        while (fgets(file_lines, sizeof(file_lines), file) != NULL) {
            fputs(file_lines, stdout);
        }
    }
    fclose(file);
    EXIT_SUCCESS;
}