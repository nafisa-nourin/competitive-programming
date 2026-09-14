#include <stdio.h>

int main()
{
    int base, i, j, M, W;
    int address;

    printf("Enter base address: ");
    scanf("%d", &base);

    printf("Enter Row Index (i): ");
    scanf("%d", &i);

    printf("Enter Column Index (j): ");
    scanf("%d", &j);

    printf("Enter number of rows: ");
    scanf("%d", &M);

    printf("Enter size of each element (in bytes): ");
    scanf("%d", &W);

    // Column Major Order Address Calculation
    address = base + ((j * M) + i) * W;

    printf("\nAddress of A[%d][%d] = %d\n", i, j, address);

    return 0;
}