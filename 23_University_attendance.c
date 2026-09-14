#include <stdio.h>

int main() {
    int n, i;
    float attendance[100];
    float threshold;
    float sum = 0, average;
    float lowest;
    int lowestPosition;
    int belowThreshold = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter attendance percentages:\n");

    for (i = 0; i < n; i++) {
        scanf("%f", &attendance[i]);
        sum = sum + attendance[i];
    }

    printf("Enter attendance threshold: ");
    scanf("%f", &threshold);

    // Find students below threshold
    for (i = 0; i < n; i++) {
        if (attendance[i] < threshold) {
            belowThreshold++;
        }
    }

    // Find lowest attendance and position
    lowest = attendance[0];
    lowestPosition = 0;

    for (i = 1; i < n; i++) {
        if (attendance[i] < lowest) {
            lowest = attendance[i];
            lowestPosition = i;
        }
    }

    // Calculate average
    average = sum / n;

    printf("\nStudents below threshold = %d\n", belowThreshold);
    printf("Lowest attendance = %.2f%%\n", lowest);
    printf("Position = %d\n", lowestPosition + 1);
    printf("Average attendance = %.2f%%\n", average);

    return 0;
}