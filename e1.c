#include <stdio.h>

#define MINUTES_IN_HOUR 60

int main() {
    int minutes;

    while (1) {
        scanf("%d", &minutes);
        
        if (minutes <= 0) {
            break;
        }

        int hours = minutes / MINUTES_IN_HOUR;
        int remaining_minutes = minutes % MINUTES_IN_HOUR;

        printf("Time in minute(s): %d = %d hour(s) and %d minute(s)\n", minutes, hours, remaining_minutes);
    }

    return 0;
}
