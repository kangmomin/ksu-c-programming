#include <stdio.h>
#include <string.h>

int voidPrinter(int count) {
    for (int i = 1; i < count; i++) {
        printf(" ");
    }
}

int lastPositionPrinter(int count) {
    voidPrinter(count);
    printf("%d", count);
}

int firstPositionPrinter(int count) {
    printf("%d", count);
    voidPrinter(count);
}

int main() {
    char firstName[31], lastName[31];  // 각 문자열의 길이가 30을 넘지 않으므로 31로 선언
    int firstNameLength, lastNameLength;

    // 입력 받기
    scanf("%s %s", firstName, lastName);

    // 각 문자열의 길이 구하기
    firstNameLength = strlen(firstName);
    lastNameLength = strlen(lastName);

    // 첫 번째 형식 출력
    printf("*%s %s*\n", firstName, lastName);

    printf("*");
    lastPositionPrinter(firstNameLength);
    printf(" ");
    lastPositionPrinter(lastNameLength);
    printf("*\n");
    // 세 번째 형식 출력
    printf("*%s %s*\n", firstName, lastName);

    printf("*");
    firstPositionPrinter(firstNameLength);
    printf(" ");
    firstPositionPrinter(lastNameLength);
    printf("*\n");

    return 0;
}
