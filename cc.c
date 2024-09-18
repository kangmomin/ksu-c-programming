#include <stdio.h>
int main() {
    long long x1, x2, x3, y1, y2, y3, a, b;

    scanf("%lld %lld %lld %lld %lld %lld", &x1, &y1, &x2, &y2, &x3, &y3);

    a = (x2 - x1) * (y1 - y2) - (x2 - x3) * (y1 - y3);
    b = 2 * (x2 - x1 + y1 - y2);

    printf("Area = %lld, Perimeter = %lld", a, b);

    return 0;
}