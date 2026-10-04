#include <stdio.h>

char pulse(void)
{
    return '@';
}

int main(void)
{
    printf("%c \n%c%c\n%c%c%c", pulse(), pulse(), pulse(), pulse(), pulse(), pulse());
    return 0;
}