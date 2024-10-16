#include<stdio.h>
#include<math.h>

int main() {
    int start, end;

    scanf("%d %d", &start, &end);

    for (int i = start; i <= end; i++) {
        printf("%d %.0lf %.0lf\n", i, pow(i, 2), i * pow(i, 2));
    }
}