#include <stdio.h>

int main() {
    double speed, size;
    
    scanf("%lf %lf", &speed, &size);

    printf("%.2lfsec", (size * 8) / speed);
}