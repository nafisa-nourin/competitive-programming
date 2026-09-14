#include <stdio.h>

int main() {
    int n, i;
    int patients[100];
    int max, min;
    int maxHour;
    int peakHour;
    int aboveAverage = 0;
    float sum = 0, average;

    printf("Enter number of hours: ");
    scanf("%d", &n);

    printf("Enter number of patients for each hour:\n");

    for (i = 0; i < n; i++) {
        scanf("%d", &patients[i]);
        sum = sum + patients[i];
    }

    // Initialize maximum and minimum
    max = patients[0];
    min = patients[0];
    maxHour = 1;

    // Find maximum and minimum
    for (i = 1; i < n; i++) {
        if (patients[i] > max) {
            max = patients[i];
            maxHour = i + 1;
        }

        if (patients[i] < min) {
            min = patients[i];
        }
    }

    // Calculate average
    average = sum / n;

    // Count hours above average
    for (i = 0; i < n; i++) {
        if (patients[i] > average) {
            aboveAverage++;
        }
    }

    peakHour = maxHour;

    printf("\nMaximum patients = %d\n", max);
    printf("Hour of maximum patients = %d\n", maxHour);
    printf("Minimum patients = %d\n", min);
    printf("Peak hour = %d\n", peakHour);
    printf("Average patients = %.2f\n", average);
    printf("Hours above average = %d\n", aboveAverage);

    return 0;
}