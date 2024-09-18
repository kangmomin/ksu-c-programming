#include <stdio.h>

int main() {
    int r1, r2, r3, r4, r5;

    scanf("%d %d %d %d %d", &r1, &r2, &r3, &r4, &r5);

    printf("%d", (int)((1 / r1) + (1 / (1 / (r3 + r1 + r2)) + (1 / r3) + r5) + r4));
}