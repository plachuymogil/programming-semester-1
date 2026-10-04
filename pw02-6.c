#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t a;

    scanf("%hhu", &a);

    uint8_t sum = a + a;
    uint8_t twice = a * 2;
    uint8_t square = a * a;

    printf("ADD: %u\n", (unsigned int)sum);
    printf("MUL2: %u\n", (unsigned int)twice);
    printf("SQR: %u\n", (unsigned int)square);

    return 0;
}

// 8 бит могут хранить 256 значений при вычисление больше 255 счет начинается снова с нуля