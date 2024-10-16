#include <stdio.h>

int main() {
    double origin, interest, year;
    double total;

    scanf("%lf %lf %lf", &origin, &interest, &year);

    total = origin;
    
    for (int i = 0; i < year; i++) {
        total += (total * interest);
    }

    printf("%.5lf", total);
}