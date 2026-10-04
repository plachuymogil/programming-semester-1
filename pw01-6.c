#include <stdio.h>

int main(void)
{
    int years = 18;
    const int days_per_year = 365;
    const int hours_per_day = 24;
    const int sec_per_hours = 3600;
    long long tics = years * days_per_year * hours_per_day * sec_per_hours;
    printf("Тики: %lld|Часы: %d|Дни: %d|Годы: %d", tics, years * days_per_year * hours_per_day ,days_per_year * years, years);
    return 0;
}