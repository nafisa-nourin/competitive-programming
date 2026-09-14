#include <stdio.h> 

#define INF 99999 

int main() { 

    int n, cost[20][20], dist[20], visited[20] = {0}; 

    int source; 


    scanf("%d", &n); 


    for (int i = 0; i < n; i++) 

        for (int j = 0; j < n; j++) 

            scanf("%d", &cost[i][j]); 


    scanf("%d", &source); 

    for (int i = 0; i < n; i++) 

        dist[i] = cost[source][i]; 

    dist[source] = 0; 

    visited[source] = 1; 

    for (int count = 1; count < n; count++) { 

        int min = INF, u = -1; 

  

        for (int i = 0; i < n; i++) 

            if (!visited[i] && dist[i] < min) { 

                min = dist[i]; 

                u = i; 

            } 

        if (u == -1) 

            break; 

        visited[u] = 1; 

        for (int v = 0; v < n; v++) 

            if (!visited[v] && 

                dist[u] + cost[u][v] < dist[v]) 

                dist[v] = dist[u] + cost[u][v]; 

    } 
    for (int i = 0; i < n; i++) 

        printf("Distance from %d to %d = %d\n", 

               source, i, dist[i]); 
    return 0; 

} 

 