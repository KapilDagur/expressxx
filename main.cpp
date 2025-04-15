#include <arpa/inet.h>
#include <sys/socket.h>

#include <netdb.h>
#include <unistd.h>


int main(int argc, char const *argv[])
{
    int sock_fd;
    int conn_fd;
    unsigned int len;

    sock_fd = socket(
        AF_INET,
        SOCK_STREAM,
        0
    );

    if (sock_fd == -1) {
        perror()
    }
    return 0;
}
