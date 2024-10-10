#include <stdio.h>

int main() {
    long long r1, r2, r3, r4, r5;

    scanf("%lld %lld %lld %lld %lld", &r1, &r2, &r3, &r4, &r5);

    long long firstLine = r1 + r2;
    double secondLine = 1 / r3;

    double thirdLine =  (1 / firstLine) + secondLine;

    printf("%d", 1 / (thirdLine + r5) );
}