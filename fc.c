#include <stdio.h>

int main() {
    int count;

    scanf("%d", &count);
    long int total = 0;

    for (int i = 0; i < count; i++) {
        int j = 0;

        if (i == count - 1) {
            scanf("%d", &j);
        } else {
            scanf("%d ", &j);
        }

        total += j;
    }

    printf("%ld", total);
}