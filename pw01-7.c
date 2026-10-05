#include <stdio.h>

char *load_mem(void)
{
    return "MEM_OK";
}

char *load_cpu(void)
{
    return "CPU_OK";
}

int main(void)
{
    printf("BOOT:%s|%s", load_mem(), load_cpu());
    return 0;
}
