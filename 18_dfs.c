#include <stdio.h> 

int a[20][20], visited[20], n; 
void dfs(int u) { 

    printf("%d ", u); 

    visited[u] = 1; 

  

    for (int v = 0; v < n; v++) 

        if (a[u][v] && !visited[v]) 

            dfs(v); 

} 

  

int main() { 

    int start; 

    scanf("%d", &n); 

  

    for (int i = 0; i < n; i++) 

        for (int j = 0; j < n; j++) 

            scanf("%d", &a[i][j]); 

  

    scanf("%d", &start); 
    printf("DFS: "); 

    dfs(start); 
    return 0; 

} 

 