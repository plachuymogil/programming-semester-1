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

// потому что мы сравниваем диапазоны а у макс инт максимум не равно диапазон поэтому мы берем беззнаковый инт потому что беззнаковый инт макс покажет диапазон этого типа