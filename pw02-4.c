#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("INT_MIN: %d\n", INT_MIN);
    printf("INT_MAX: %d\n", INT_MAX);
    printf("UINT_MAX: %u\n", UINT_MAX);
    printf("RANGE_OK: %d\n", (unsigned int)INT_MAX * 2u + 1u == UINT_MAX);

    return 0;
}

// потому что инт макс * 2 будет переполнение чтобы его не было мы переводим инт в юинт и тогда наши значения будут равны
