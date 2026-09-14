#include <stdio.h> 
struct Edge { 

    int u, v, w; 

}; 

  

int parent[20]; 

  

int find(int x) { 

    while (parent[x] != x) 

        x = parent[x]; 

    return x; 

} 

void unite(int a, int b) { 

    parent[find(a)] = find(b); 

} 

int main() { 

    int n, e; 

    struct Edge edge[50], temp; 

    scanf("%d %d", &n, &e); 

    for (int i = 0; i < e; i++) 

        scanf("%d %d %d", &edge[i].u, &edge[i].v, &edge[i].w); 

    for (int i = 0; i < e; i++) 

        for (int j = i + 1; j < e; j++) 

            if (edge[i].w > edge[j].w) { 

                temp = edge[i]; 

                edge[i] = edge[j]; 

                edge[j] = temp; 

            } 

    for (int i = 0; i < n; i++) 

        parent[i] = i; 

    int count = 0, cost = 0; 

    printf("MST:\n"); 

    for (int i = 0; i < e && count < n - 1; i++) { 

        if (find(edge[i].u) != find(edge[i].v)) { 

            printf("%d - %d : %d\n", 

                   edge[i].u, edge[i].v, edge[i].w); 

            cost += edge[i].w; 

            unite(edge[i].u, edge[i].v); 

            count++; 

        } 

    } 
    printf("Cost = %d\n", cost); 
    return 0; 

} 