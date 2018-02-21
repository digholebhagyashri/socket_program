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
printf("socket created successfully\n");
	 

}
