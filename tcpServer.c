#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define PORT 4444

int main()
{
int socketfd;
struct sockaddr_in serverAddr;

int newSocket;
struct sockaddr_in newAddr;
socklen_t addr_size;
char buffer[1024];

socketfd=socket(AF_INET, SOCK_STREAM,0);
//printf("%d",socketfd);
printf("socket created successfully\n");

serverAddr.sin_family=AF_INET;
serverAddr.sin_port=htons(PORT);
serverAddr.sin_addr.s_addr=inet_addr("127.0.0.1");

bind(socketfd,(struct sockaddr*)&serverAddr,sizeof(serverAddr));
printf("bind to %d port no.\n",PORT);

listen(socketfd,5);
printf("listening\n");

newSocket = accept(socketfd,(struct sockaddr*)&newAddr,&addr_size);
strcpy(buffer,"hello");
send(newSocket, buffer, strlen(buffer), 0);
printf("[+]Closing the connection.\n");


	 

}
