#include <stdio.h>

int main() {
    while (1) {
        double a, b;
        
        if (scanf("%lf %lf", &a, &b ) == 0) {
            return 0;
        }

        printf("%.3lf\n", ((a - b) / (a * b)));
    }
}