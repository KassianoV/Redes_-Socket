#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define PORT 8080
int main(){
  int meuSocket;
  int conecta;
  struct sockaddr_in server;
  meuSocket = socket(AF_INET, SOCK_STREAM, 0);
  
  server.sin_family = AF_INET;
  server.sin_port = htons(PORT);
  server.sin_addr.s_addr = inet_addr("192.168.0.1");
  
  conecta = connect(meusocket,(struct sockaddr*)&server,sizeof server);
}
