#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 8080

int main()
{
    int server_fd, new_socket;
    struct sockaddr_in address;
    int addrlen = sizeof(address);
    char buffer[1024] = {0};
    char msg[1024];

    // Creating the socket
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0)
    {
        perror("Socket failed");
    }

    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    // Binding the socket
    if (bind(server_fd, (struct sockaddr*)&address, sizeof(address)) < 0)
    {
        perror("Bind failed");
    }

    // Listen for connections
    if (listen(server_fd, 3) < 0)
    {
        perror("Listen failed");
    }

    printf("Server is waiting for a connection.........\n");

    // Accept a client connection
    if ((new_socket = accept(server_fd, (struct sockaddr*)&address, (socklen_t*)&addrlen)) < 0)
    {
        perror("Accept failed");
    }

    printf("Client connected!\n");

    while (1)
    {
        recv(new_socket, buffer, 1024 - 1, 0);
        printf("Client asked: %s\nEnter answer: ", buffer);

        fgets(msg, sizeof(msg), stdin);
        msg[strcspn(msg, "\n")] = 0;

        send(new_socket, msg, strlen(msg), 0);
    }

    close(new_socket);
    close(server_fd);
    return 0;
}
