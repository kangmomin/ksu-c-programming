#include <stdio.h>

int main() {
    double quart;
    int quartPerWater = 950;

    scanf("%lf", &quart);

    printf("%e", quart * quartPerWater / 3.0e-23);
}