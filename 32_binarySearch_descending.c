#include <stdio.h>

int main() {
    int a[] = {90, 70, 50, 30, 10};
    int n = 5, target = 30;
    int low = 0, high = n - 1, mid;
    int found = -1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == target) {
            found = mid;
            break;
        }
        else if (target < a[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    printf("Index = %d\n", found);

    return 0;
}