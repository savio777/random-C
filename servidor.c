// criador do algoritmo https://blog.pantuza.com/artigos/programando-um-protocolo-utilizando-sockets
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

/* porta do servidor  */
#define PORT 4242

/* tamanho do buffer */
#define BUFFER_LENGTH 4096

int main(void) {

    /* Client and Server socket structures */
    struct sockaddr_in client, server;

    /* File descriptors of client and server */
    int serverfd, clientfd;

    char buffer[BUFFER_LENGTH];

    fprintf(stdout, "iniciando server\n");

    /* Creates a IPv4 socket */
    serverfd = socket(AF_INET, SOCK_STREAM, 0);
    if(serverfd == -1) {
        perror("Can't create the server socket:");
        return EXIT_FAILURE;
    }
    fprintf(stdout, "Server criado com socket fd: %d\n", serverfd);


    /* Defines the server socket properties */
    server.sin_family = AF_INET;
    server.sin_port = htons(PORT);
    memset(server.sin_zero, 0x0, 8);


    /* Handle the error of the port already in use */
    int yes = 1;
    if(setsockopt(serverfd, SOL_SOCKET, SO_REUSEADDR,
                  &yes, sizeof(int)) == -1) {
        perror("Socket options error:");
        return EXIT_FAILURE;
    }


    /* bind the socket to a port */
    if(bind(serverfd, (struct sockaddr*)&server, sizeof(server)) == -1 ) {
        perror("Socket bind error:");
        return EXIT_FAILURE;
    }


    /* Starts to wait connections from clients */
    if(listen(serverfd, 1) == -1) {
        perror("Listen error:");
        return EXIT_FAILURE;
    }
    fprintf(stdout, "Listening na porta %d\n", PORT);

    socklen_t client_len = sizeof(client);
    if ((clientfd=accept(serverfd,
        (struct sockaddr *) &client, &client_len )) == -1) {
        perror("Accept error:");
        return EXIT_FAILURE;
    }


    /* Copies into buffer our welcome messaage */
    strcpy(buffer, "iae cliente kkk\n\0");


    /* enviar mensagem ao cliente */
    if (send(clientfd, buffer, strlen(buffer), 0)) {
        fprintf(stdout, "Cliente conectado.\nEsperando por mensagem do cliente...\n");

        do {

            /* zerar buffers */
            memset(buffer, 0x0, BUFFER_LENGTH);

            /* receber mensagem do cliente */
            int message_len;
            if((message_len = recv(clientfd, buffer, BUFFER_LENGTH, 0)) > 0) {
                buffer[message_len - 1] = '\0';
                printf("Cliente> %s\n", buffer);
            }


            /* 'bye' message finishes the connection */
            if(strcmp(buffer, "flw") == 0) {
                send(clientfd, "flw", 3, 0);
            } else {
                send(clientfd, "iae kk\n", 4, 0);
            }

        } while(strcmp(buffer, "flw"));
    }

    /* fechar conexão do cliente */
    close(clientfd);

    /* fechar local do socket */
    close(serverfd);

    printf("\nconexao fechada\n\n");

    return EXIT_SUCCESS;
}