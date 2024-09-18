#include <stdio.h>
#include <math.h>

int main() {
    double a, V, A, h;

    scanf("%lf", &a);

    V = (sqrt(2) / 12) * pow(a, 3);
    A = sqrt(3) * pow(a, 2);
    h = (sqrt(6) * a) / 3;

    printf("%.2f %.2f %.2f\n", V, A, h);

    return 0;
}
