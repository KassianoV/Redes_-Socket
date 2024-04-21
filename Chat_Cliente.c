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
  
  serveer.sin_family = AF_INET;
}
