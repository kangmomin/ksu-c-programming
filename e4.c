#include <stdio.h>

void Temperatures(double fahrenheit);

int main() {
    double fahrenheit;

    scanf("%lf", &fahrenheit);

    Temperatures(fahrenheit);

    return 0;
}

void Temperatures(double fahrenheit) {
    double celsius = 5.0 / 9.0 * (fahrenheit - 32.0);
    double kelvin = celsius + 273.16;

    printf("Fahrenheit: %.2f = Celsius: %.2f = Kelvin: %.2f\n", fahrenheit, celsius, kelvin);
}
