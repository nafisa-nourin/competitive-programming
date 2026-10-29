#include <stdio.h>

int main() {
    int a[] = {2, 3, 5, 3, 2};
    int n = 5, result = 0;

    for (int i = 0; i < n; i++) {
        result = result ^ a[i];
    }

    printf("Single number = %d\n", result);

    return 0;
}