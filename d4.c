#include <stdio.h>
#include <string.h>

int main() {
    char firstName[31], lastName[31];
    int age, nameLength;

    scanf("%s %s", firstName, lastName);
    scanf("%d", &age);

    nameLength = strlen(firstName) + strlen(lastName);

    printf("%d %d\n", nameLength, age);

    return 0;
}
