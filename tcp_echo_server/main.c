#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/socket.h>

int main(int argc, char **argv) {
    if (argc != 2) {
        int fd, connection;
        char buffer[1024];

        struct sockaddr_in server;

        server.sin_family = AF_INET;
        server.sin_addr.s_addr = inet_addr(argv[1]);
        server.sin_port = htons(atoi(argv[2]));

        fd = socket(AF_INET, SOCK_STREAM, 0);

        bind(fd, (struct sockaddr *)&server, sizeof(server));
        listen(fd, 128);

        connection = accept(fd, NULL, NULL);

        read(connection, buffer, sizeof(buffer));
        send(connection, buffer, strlen(buffer), 0);
        close(fd);
    } else {
        printf("Usage: %s <IP_ADDRESS> <PORT>", argv[0]);
        exit(EXIT_FAILURE);
    }
    EXIT_SUCCESS;
}