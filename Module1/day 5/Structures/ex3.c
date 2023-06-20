#include <stdio.h>

// Structure for time period
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to calculate the difference between two time periods
struct Time calculateTimeDifference(struct Time* startTime, struct Time* endTime) {
    struct Time difference;
    int startSeconds, endSeconds, diffSeconds;

    startSeconds = startTime->hours * 3600 + startTime->minutes * 60 + startTime->seconds;
    endSeconds = endTime->hours * 3600 + endTime->minutes * 60 + endTime->seconds;

    diffSeconds = endSeconds - startSeconds;

    difference.hours = diffSeconds / 3600;
    difference.minutes = (diffSeconds % 3600) / 60;
    difference.seconds = (diffSeconds % 3600) % 60;

    return difference;
}

int main() {
    struct Time startTime, endTime, difference;

    printf("Enter the start time (hh:mm:ss): ");
    scanf("%d:%d:%d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    printf("Enter the end time (hh:mm:ss): ");
    scanf("%d:%d:%d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    difference = calculateTimeDifference(&startTime, &endTime);

    printf("\n");
    printf("Time difference: %02d:%02d:%02d\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}
