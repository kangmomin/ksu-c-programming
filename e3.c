#include <stdio.h>

int main() {
    int days;
    long long total_salary = 0;

    scanf("%d", &days);

    for (int i = 1; i <= days; i++) {
        total_salary += i * 1000;
    }

    printf("%lld\n", total_salary);

    return 0;
}
