#include <stdio.h>

void ping(void)
{
    printf("PING");
}

void pong(void)
{
    printf("PONG");
}

void handshake(void)
{
    ping();
    printf("-");
    pong();
    printf("-");
    ping();
}

int main(void)
{
    int NODE_ID = 42;
    int packet_size = NODE_ID * 4;
    int total_transfer = packet_size * 3;

    handshake();
    printf(":%d\n", packet_size);

    handshake();
    printf(":%d\n", total_transfer);

    printf("SESSION:CLOSED");

    return 0;
}