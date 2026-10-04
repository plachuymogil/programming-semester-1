#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int x, y;
    bool a, b;

    scanf("%d %d", &x, &y);

    a = x;
    b = y;

    printf("MODULE READY: %d\n", a);
    printf("FAULT_STATE: %d\n", b);
    printf("BOOL_SIZE: %zu\n", sizeof(bool));
    printf("FLAGS_SUM: %d \n", a + b);

    return 0;
}

//Потому что любое число кроме 0 это True => любое число в булевом типе (кроме 0) = 1, а 0 = False