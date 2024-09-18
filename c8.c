#include <stdio.h>
#include <math.h>  // M_PI 상수를 사용하기 위해 필요

int main() {
    double radius, area, perimeter;

    // 반지름 입력 받기
    scanf("%lf", &radius);

    // 면적 계산
    area = M_PI * radius * radius;

    // 둘레 계산
    perimeter = 2 * M_PI * radius;

    // 출력 (소수점 이하 첫째 자리까지)
    printf("Radius = %.1f, Area = %.1f, Perimeter = %.1f\n", radius, area, perimeter);

    return 0;
}
