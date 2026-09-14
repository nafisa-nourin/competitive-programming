#include <stdio.h> 
int main() { 

    int n, a[20][20], visited[20] = {0}; 

    int q[20], front = 0, rear = 0, start; 

    scanf("%d", &n); 

    for (int i = 0; i < n; i++) 

        for (int j = 0; j < n; j++) 

            scanf("%d", &a[i][j]); 

  

    scanf("%d", &start); 

    visited[start] = 1; 

    q[rear++] = start; 

    printf("BFS: "); 

    while (front < rear) { 

        int u = q[front++]; 

        printf("%d ", u); 
        for (int v = 0; v < n; v++) { 

            if (a[u][v] && !visited[v]) { 

                visited[v] = 1; 

                q[rear++] = v; 

            } 

        } 

    } 
    return 0; 

} 