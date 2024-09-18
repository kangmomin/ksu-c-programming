#include <stdio.h>

int main() {
    double cup, pint, ounce, tablespoon, teaspoon;

    scanf("%lf", &cup);
    pint = cup / 2;
    ounce = cup * 8;
    tablespoon = ounce * 2;
    teaspoon = tablespoon * 3;

    printf("%.6lf cups are equivalent to each of the following:\n", cup);
    printf("%.6lf pints\n", pint);
    printf("%.6lf tablespoons\n", tablespoon);
    printf("%.6lf teaspoons\n", teaspoon);
}