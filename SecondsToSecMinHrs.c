#include <stdio.h>

int main() {
    int seconds, hours, minutes, remaining_seconds;

    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    seconds = seconds % 3600;
    minutes = seconds / 60;
    remaining_seconds = seconds %
     60;

    printf("Hours = %d, Minutes = %d, Seconds = %d\n", hours, minutes, remaining_seconds);

    return 0;
}
