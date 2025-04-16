#include <stdio.h>
#include <stdbool.h>

bool deliveredYesterday(int tz_from, int tz_to, int start, int duration) {
    int arrival = start - tz_from + duration + tz_to;
    return arrival < 0;
}

int main() {
    int tz_from, tz_to, start, duration;

    printf("Sender time zone: ");
    scanf("%d", &tz_from);

    printf("Receiver time zone: ");
    scanf("%d", &tz_to);

    printf("Start time (0-23): ");
    scanf("%d", &start);

    printf("Duration (in hours): ");
    scanf("%d", &duration);

    bool result = deliveredYesterday(tz_from, tz_to, start, duration);

    printf("\nWas the package received the day before? %s\n", result ? "True" : "False");

    return 0;
}
