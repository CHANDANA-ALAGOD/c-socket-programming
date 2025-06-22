#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#define PORT 8080

int main()
{
    int client_fd = 0;
    struct sockaddr_in serv_addr;
    char buffer[1024] = {0};
    char msg[1024];

    // Creating socket
    if ((client_fd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        perror("Socket creation failed");
    }
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);

    // Convert IP address and connect
    if (inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr) <= 0)
    {
        perror("Invalid address");
    }
    if (connect(client_fd, (struct sockaddr*)&serv_addr, sizeof(serv_addr)) < 0)
    {
        perror("Connection failed");
    }

    printf("Connected to server! \n");

    while (1)
    {
        printf("Enter a question: ");
        fgets(msg, sizeof(msg), stdin);
        msg[strcspn(msg, "\n")] = 0;

        send(client_fd, msg, strlen(msg), 0);
        recv(client_fd, buffer, 1024 - 1, 0);
        printf("Server: %s\n", buffer);
    }

    close(client_fd);
    return 0;
}
