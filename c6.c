#include <stdio.h>

int main() {
    double m3, cm3, hob, doe, mal, liter;

    scanf("%lf", &m3);
    cm3 = m3 * 1000000;
    liter = m3 * 1000;
    hob = cm3 / 180.39;
    doe = hob / 10;
    mal = doe / 10;
    
    printf("%.2lf cubic meters are equivalent to each of the following:\n", m3);
    printf("%.2lf hob\n", hob);
    printf("%.2lf doe\n", doe);
    printf("%.2lf mal\n", mal);
    printf("%.2lf liters\n", liter);
}