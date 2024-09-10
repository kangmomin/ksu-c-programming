#include <stdio.h>

int main() {
    int age;
    scanf("%d", &age);
    long int totalDate = 365 * age;
    printf("The age of %d years is %ld days.", age, totalDate);
    return 0;
}