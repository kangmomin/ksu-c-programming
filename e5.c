#include <stdio.h>

int main() {
    int seconds;

    while (1) {
        scanf("%d", &seconds);

        if (seconds <= 0) {
            break;
        }

        int days = seconds / 86400;
        seconds %= 86400;

        int hours = seconds / 3600;
        seconds %= 3600;

        int minutes = seconds / 60;
        seconds %= 60;

        printf("%d second(s) = %d day(s) %d hour(s) %d minute(s) and %d second(s)\n",
               seconds + minutes * 60 + hours * 3600 + days * 86400, days, hours, minutes, seconds);
    }

    return 0;
}
