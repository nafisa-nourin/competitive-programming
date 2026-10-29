#include <stdio.h>

int main() {
    int a[] = {2, 7, 11, 15};
    int n = 4, target = 9;
    int found = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == target) {
                printf("Indices: %d and %d\n", i, j);
                found = 1;
                break;
            }
        }

        if (found)
            break;
    }

    if (!found)
        printf("No pair found\n");

    return 0;
}