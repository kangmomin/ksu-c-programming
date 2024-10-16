#include <stdio.h>
#include <math.h>

int main() {
    while (1) {
        int a, b;
        
        scanf("%d %d", &a, &b);
        if (b <= a) {
            return 0;
        }

        int total = 0;

        for (int i = a; i <= b; i++) {
            total += i * i;
        }
        
        printf("%d\n", total);
    }
}