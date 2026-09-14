#include <stdio.h> 

int main() { 

    int n, e, u, v; 

    int a[20][20] = {0}; 

    printf("Enter vertices and edges: "); 

    scanf("%d %d", &n, &e); 

    for (int i = 0; i < e; i++) { 

        scanf("%d %d", &u, &v); 

        a[u][v] = a[v][u] = 1; 

    } 

    printf("Adjacency Matrix:\n"); 

    for (int i = 0; i < n; i++) { 

        for (int j = 0; j < n; j++) 

            printf("%d ", a[i][j]); 

        printf("\n"); 

    } 

    return 0; 

} 

 