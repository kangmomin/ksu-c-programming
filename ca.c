#include <stdio.h>

int main() {
    long a, b, c, d;
    long area, perimeter;

    scanf("%ld %ld %ld %ld", &a, &b, &c, &d);

    area = a * b - c * d;
    perimeter = 2 * (a + b);

    printf("Area = %ld, Perimeter = %ld\n", area, perimeter);

    return 0;
}
