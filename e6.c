#include <stdio.h>

int main() {
    double kelvin, celsius, fahrenheit;

    scanf("%lf", &kelvin);

    celsius = kelvin - 273.16;
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    printf("%.2f %.2f\n", fahrenheit, celsius);

    return 0;
}
