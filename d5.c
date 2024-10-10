#include <stdio.h>

int main() {
    int sales[4];
    int total = 0;
    double percentage;

    for (int i = 0; i < 4; i++) {
        scanf("%d", &sales[i]);
        total += sales[i];
    }

    percentage = (double)sales[3] / total * 100;

    printf("%.2f%%\n", percentage);

    return 0;
}
