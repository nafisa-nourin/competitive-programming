#include <stdio.h>

int main() {
    int a[] = {2, 3, 2, 5, 3, 7};
    int n = 6;

    printf("After removing duplicates: ");

    for (int i = 0; i < n; i++) {
        int found = 0;

        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                found = 1;
                break;
            }
        }

        if (found == 0) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}