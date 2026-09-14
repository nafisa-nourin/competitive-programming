#include <stdio.h>

int main()
{
    int base, i, j, N, W;
    int address;

    printf("Enter base address: ");
    scanf("%d", &base);

    printf("Enter Row Index (i): ");
    scanf("%d", &i);

    printf("Enter Column Index (j): ");
    scanf("%d", &j);

    printf("Enter number of columns: ");
    scanf("%d", &N);

    printf("Enter size of each element (in bytes): ");
    scanf("%d", &W);

    // Row Major Order
    address = base + ((i * N) + j) * W;

    printf("\nAddress of A[%d][%d] = %d\n", i, j, address);

    return 0;
}
