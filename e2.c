#include <stdio.h>

int main() {
    long long n, m, sum = 0;

    scanf("%lld %lld", &n, &m);

    for (int i = n - m; i <= n + m; i++) {
        sum += i;
    }

    printf("%lld\n", sum);

    return 0;
}
