#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define PORT 80
int main(){
  int meuSocket;
  int conecta;
  char buffer[1024];
  struct sockaddr_in server;
  
  meuSocket = socket(AF_INET, SOCK_STREAM, 0);
  if(meuSocket < 0){
    perror("ERRO AO CRIAR SOCKET");
    exit(EXIT_FAILURE);
  }
  
  //Configuração do endereço do servidor 
  menset(&server, 0, sizeof(server));
  server.sin_family = AF_INET;
  server.sin_port = htons(PORT);
  server.sin_addr.s_addr = inet_addr("192.168.0.1");
  
  //Conexão ao servidor
  conecta = connect(meusocket,(struct sockaddr*)&server,sizeof server);
  if(conecta < 0){
    perror("ERRO AO CONECTAR-SE AO SERVIDOR");
    exit(EXIT_FAILURE);
  }else{
    
  } 
  
  //Envio da mensagem de registro
  strcpy(buffer,"quero me registrar");
  send(meuSocket, buffer, strlen(buffer), 0);
  printf("mensagem enviada: %s\n",buffer);
  
  //Recebimento da mensagem do servidor 
  menset(buffer, 0, sizeof(buffer));
  recv(meuSOcket, buffer, sizeof(buffer), 0);
  printf("Resposta do servidor %s\n", buffer);
  
  //Fechamento sockect
  close(meuSocket);
  close(conecta);
}
