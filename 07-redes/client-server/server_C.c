#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

int main() {
    int socket_desc, client_sock, c, read_size;
    struct sockaddr_in server, client;
    char buffer[1024];

    // 1. Criar Socket
    printf("[1] Criando Socket... ");
    socket_desc = socket(AF_INET, SOCK_STREAM, 0);
    if (socket_desc == -1) {
        printf("Nao foi possivel criar socket");
        return 1;
    }
    printf("OK.\n");

    // Configuração para permitir reuso rápido da porta (evita erro "Address already in use")
    int opt = 1;
    setsockopt(socket_desc, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));

    server.sin_family = AF_INET;
    server.sin_addr.s_addr = INADDR_ANY; // Escuta em 0.0.0.0
    server.sin_port = htons(65432);

    // 2. Bind
    printf("[2] Fazendo Bind na porta 65432... ");
    if (bind(socket_desc, (struct sockaddr *)&server, sizeof(server)) < 0) {
        perror("Bind falhou"); // perror imprime o erro exato do sistema
        return 1;
    }
    printf("OK (Sucesso).\n");

    // 3. Listen
    listen(socket_desc, 3);

    printf("\n---> SERVIDOR RODANDO E ESPERANDO EM 0.0.0.0:65432 <--- \n");
    printf("Peca para seu amigo conectar agora.\n");

    c = sizeof(struct sockaddr_in);

    // 4. Accept e Loop principal
    while (1) {
        // socklen_t é o tipo correto para o tamanho no Linux
        client_sock = accept(socket_desc, (struct sockaddr *)&client, (socklen_t*)&c);
        
        if (client_sock < 0) {
            perror("Falha no accept");
            continue;
        }

        printf("\n[!!!] CONEXAO RECEBIDA DE ALGUEM! [!!!]\n");

        // Loop para receber dados
        while ((read_size = recv(client_sock, buffer, 1024, 0)) > 0) {
            buffer[read_size] = '\0';
            printf("Mensagem do Cliente: %s\n", buffer);
            memset(buffer, 0, 1024); // Limpa o buffer
        }

        if (read_size == 0) {
            printf("Cliente desconectou.\n");
        } else if (read_size == -1) {
            perror("Erro no recv");
        }
        
        close(client_sock);
    }

    close(socket_desc);
    return 0;
}