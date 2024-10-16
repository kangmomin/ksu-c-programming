#include <stdio.h>

int main() {
    int count;
    double sum1 = 0.0, sum2 = 0.0;

    scanf("%d", &count);

    for (int i = 1; i <= count; i++) {
        sum1 += 1.0 / i; 

        if (i % 2 == 0) {
            sum2 -= 1.0 / i;
        } else {
            sum2 += 1.0 / i;
        }
    }

    printf("%.5f %.5f\n", sum1, sum2);

    return 0;
}
