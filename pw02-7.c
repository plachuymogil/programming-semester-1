#include <stdio.h>

int main(void)
{
    long double ld;
    double d;
    float f;

    scanf("%Lf", &ld);

    d = ld;
    f = ld;

    printf("FLOAT: %.6f\n", f);
    printf("DOUBLE: %.6f\n", d);
    printf("LDOUBLE: %.6Lf\n", ld);

    f += 1;
    d += 1;
    ld += 1;

    printf("FLOAT+1: %.6f\n", f);
    printf("DOUBLE+1: %.6f\n", d);
    printf("LDOUBLE+1: %.6Lf\n", ld);

    return 0;
}
//потому что флоат способен хранить только 7 значащих цифр а наше число имеет больше 7 значащих цифр все остальное он округлил а дабл и лонг дабл может хранить около 15-16 значащих цифр тем самым они не округлили нули