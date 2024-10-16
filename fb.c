#include <stdio.h>

int main() {
    int origin, x, amount;
    double current_amount;
    int year = 0;

    scanf("%d %d %d", &origin, &x, &amount);

    current_amount = origin;

    while (current_amount > 0) {
        // 이자율 추가
        current_amount += current_amount * (x * 0.01);
        // 출금
        current_amount -= amount;

        // 만약 첫 계산에서 기존 금액보다 출금 이후 금액이 크다면 영원히 값이 줄지 않음.
        if (current_amount >= origin) {
            printf("NO");
            return 0;
        }

        year++;
    }

    printf("%d", year);
}