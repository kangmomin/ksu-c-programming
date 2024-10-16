#include<stdio.h>

int main() {
    int count;
    scanf("%d", &count);

    int total[1000];

    for (int i = 0; i < count; i++) {
        scanf("%d", &total[i]);
    }

    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", total[i]);
    }
}