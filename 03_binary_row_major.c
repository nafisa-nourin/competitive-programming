#include <stdio.h>

int main() {
    int a[3][4];
    int i, j;
    int index;

    printf("Enter row number (0-2): ");
    scanf("%d", &i);

    printf("Enter column number (0-3): ");
    scanf("%d", &j);

    index = (i * 4) + j;

    printf("Row Major Index = %d\n", index);

    printf("Binary representation = ");

    for(int k = 7; k >= 0; k--) {
        printf("%d", (index >> k) & 1);
    }

    return 0;
}
