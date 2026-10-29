#include <stdio.h>

int main() {
    int start[]  = {1, 3, 0, 5, 8, 5};
    int finish[] = {2, 4, 6, 7, 9, 9};
    int n = 6;

    int last = 0;

    printf("Selected activities: 0 ");

    for (int i = 1; i < n; i++) {
        if (start[i] >= finish[last]) {
            printf("%d ", i);
            last = i;
        }
    }

    return 0;
}