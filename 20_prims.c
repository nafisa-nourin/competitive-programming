#include <stdio.h> 
#define INF 99999 

int main() { 

    int n, cost[20][20], selected[20] = {0}; 

    int edges = 0, total = 0; 

  

    scanf("%d", &n); 

  

    for (int i = 0; i < n; i++) 

        for (int j = 0; j < n; j++) 

            scanf("%d", &cost[i][j]); 

  

    selected[0] = 1; 

  

    printf("MST:\n"); 

  

    while (edges < n - 1) { 

        int min = INF, x = -1, y = -1; 

  

        for (int i = 0; i < n; i++) { 

            if (selected[i]) { 

                for (int j = 0; j < n; j++) { 

                    if (!selected[j] && cost[i][j] < min) { 

                        min = cost[i][j]; 

                        x = i; 

                        y = j; 

                    } 

                } 

            } 

        } 

  

        printf("%d - %d : %d\n", x, y, min); 

        total += min; 

        selected[y] = 1; 

        edges++; 

    } 

  

    printf("Cost = %d\n", total); 

  

    return 0; 

} 