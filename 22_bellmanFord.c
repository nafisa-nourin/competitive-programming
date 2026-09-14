#include <stdio.h> 
#define INF 99999 

struct Edge { 

    int u, v, w; 

}; 

int main() { 

    int n, e, source; 

    struct Edge edge[50]; 

    int dist[20]; 
    scanf("%d %d", &n, &e); 

    for (int i = 0; i < e; i++) 

        scanf("%d %d %d", 

              &edge[i].u, &edge[i].v, &edge[i].w); 

    scanf("%d", &source); 

    for (int i = 0; i < n; i++) 

        dist[i] = INF; 

    dist[source] = 0; 

    for (int i = 1; i < n; i++) { 

        for (int j = 0; j < e; j++) { 

            int u = edge[j].u; 

            int v = edge[j].v; 

            int w = edge[j].w; 

  

            if (dist[u] != INF && 

                dist[u] + w < dist[v]) 

                dist[v] = dist[u] + w; 

        } 

    } 

  

    for (int j = 0; j < e; j++) { 

        int u = edge[j].u; 

        int v = edge[j].v; 

        int w = edge[j].w; 

  

        if (dist[u] != INF && 

            dist[u] + w < dist[v]) { 

            printf("Negative cycle exists\n"); 

            return 0; 

        } 

    } 
    for (int i = 0; i < n; i++) 

        printf("Distance from %d to %d = %d\n", 

               source, i, dist[i]); 

  

    return 0; 

} 