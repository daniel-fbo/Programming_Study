#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h> // For inet_addr
#include <unistd.h>    // For close

int main() {
    int sock;
    struct sockaddr_in server;
    char *message = "Ola Mundo em C!";
    char server_reply[2000];

    // 1. Criar Socket
    // Em Linux, socket retorna -1 em caso de erro
    sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock == -1) {
        printf("Nao foi possivel criar socket");
        return 1;
    }
    printf("Socket criado.\n");

    server.sin_addr.s_addr = inet_addr("177.40.135.81"); // Endereço IP do servidor
    server.sin_family = AF_INET;
    server.sin_port = htons(65432);

    // 2. Conectar ao servidor remoto
    if (connect(sock, (struct sockaddr *)&server, sizeof(server)) < 0) {
        perror("Erro ao conectar");
        return 1;
    }

    printf("Conectado.\n");

    // 3. Enviar dados
    if (send(sock, message, strlen(message), 0) < 0) {
        printf("Falha no envio.");
        return 1;
    }
    printf("Dados enviados.\n");

    // 4. Fechar socket
    close(sock);

    printf("Owari da (Fim)\n");
    return 0;
}