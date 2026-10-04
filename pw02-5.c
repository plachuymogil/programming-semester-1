#include <stdio.h>
#include <stdint.h>

int main(void)
{
    printf("INT8: size=%zu, min=%d, max=%d, values=%lld\n", sizeof(int8_t), INT8_MIN, INT8_MAX, (long long)INT8_MAX - (long long)INT8_MIN + 1);
    printf("UINT8: size=%zu, min=%u, max=%u, values=%llu\n", sizeof(uint8_t), 0u, UINT8_MAX, (unsigned long long)UINT8_MAX + 1);
    printf("INT16: size=%zu, min=%d, max=%d, values=%lld\n", sizeof(int16_t), INT16_MIN, INT16_MAX, (long long)INT16_MAX - (long long)INT16_MIN + 1);
    printf("UINT16: size=%zu, min=%u, max=%u, values=%llu\n", sizeof(uint16_t), 0u, UINT16_MAX, (unsigned long long)UINT16_MAX + 1);
    printf("INT32: size=%zu, min=%d, max=%d, values=%lld\n", sizeof(int32_t), INT32_MIN, INT32_MAX, (long long)INT32_MAX - (long long)INT32_MIN + 1);
    printf("UINT32: size=%zu, min=%u, max=%u, values=%llu\n", sizeof(uint32_t), 0u, UINT32_MAX, (unsigned long long)UINT32_MAX + 1);

    return 0;
}

//беззнаковый и знаковый тип имеют одинаковое кол-во символов потому что знаковый берет диапазон с минусом и плюсом где макс и мин равноудалены от нуля а беззнаковый берет 2 максимальных диапазона знакового типа, диапазоны различаются тем что у знакового есть минус и плюс равноудаленный от нуля а у беззнакового только плюс который 2 максимума знакового типа