#include <stdio.h>
#include <math.h>

int main() {
    const double G = 6.67430e-11;
    
    double m1, m2, r;
    
    scanf("%lf %lf %lf", &m1, &m2, &r);
    
    r *= 1000;
    
    double F = G * m1 * m2 / (r * r);
    
    printf("%.6e\n", F);
    
    return 0;
}