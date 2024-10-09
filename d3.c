#include <stdio.h>

#define LITERS_PER_GALLON 3.785
#define KILOMETERS_PER_MILE 1.609

int main() {
    double miles, gallons, mpg, liters_per_100km;

    scanf("%lf %lf", &miles, &gallons);

    mpg = miles / gallons;
    liters_per_100km = (gallons * LITERS_PER_GALLON) / (miles * KILOMETERS_PER_MILE) * 100;

    printf("%.1f mpg or %.1f liters / 100Km.\n", mpg, liters_per_100km);

    return 0;
}
