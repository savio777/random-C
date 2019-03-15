// criar cliente
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <stdbool.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

/* definir porta do servidor */
#define PORT 4242

/* tamanho do buffer do socket */
#define LEN 4096

/* endereço do servidor (local) */
#define SERVER_ADDR "127.0.0.1"

int main(int argc, char *argv[]) {

    /* soquete do servidor */
    struct sockaddr_in server;
    /* arquivo descritor do cliente para o local do socket */
    int sockfd;

    int len = sizeof(server);
    int slen;

    /* receber buffer */
    char buffer_in[LEN];
    /* enviar buffer */
    char buffer_out[LEN];

    fprintf(stdout, "iniciando cliente ...\n");

    /*
     * ciar socket para o cliente
     */
    if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
        perror("erro na criacao do soquet cliente:");
        return EXIT_FAILURE;
    }
    fprintf(stdout, "socket do cliente criado com fd: %d\n", sockfd);


    /* definir as propriedades da conexão */
    server.sin_family = AF_INET;
    server.sin_port = htons(PORT);
    server.sin_addr.s_addr = inet_addr(SERVER_ADDR);
    memset(server.sin_zero, 0x0, 8);


    /* tentar conectar ao servidor */
    if (connect(sockfd, (struct sockaddr*) &server, len) == -1) {
        perror("não conseguiu conectar ao servidor");
        return EXIT_FAILURE;
    }


    /* Receives the presentation message from the server */
    if ((slen = recv(sockfd, buffer_in, LEN, 0)) > 0) {
        buffer_in[slen + 1] = '\0';
        fprintf(stdout, "Server>: %s\n", buffer_in);
    }


    /*
     * comunicar com o server enquanto a mensagem não vem
     */
    while (true) {

        /* zerar os buffers */
        memset(buffer_in, 0x0, LEN);
        memset(buffer_out, 0x0, LEN);

        fprintf(stdout, "> ");
        fgets(buffer_out, LEN, stdin); // sua mensagem para o server

        /* enviar a mensagem para o servidor pelo socket */
        send(sockfd, buffer_out, strlen(buffer_out), 0);

        /* receber resposta do servidor */
        slen = recv(sockfd, buffer_in, LEN, 0);
        printf("Server>: %s\n", buffer_in);

        /* 'flw' termina a conexão */
        if(strcmp(buffer_in, "flw") == 0)
            break;
    }


    /* fechar a conexão com o servidor */
    close(sockfd);

    fprintf(stdout, "\nconexao fechada\n\n");

    return EXIT_SUCCESS;
}