#include <stdio.h> 

#include <stdlib.h> 

struct Node { 

    int vertex; 

    struct Node *next; 

}; 

int main() { 

    int n, e, u, v; 

    struct Node *adj[20] = {NULL}; 


    printf("Enter vertices and edges: "); 

    scanf("%d %d", &n, &e); 

    for (int i = 0; i < e; i++) { 

        scanf("%d %d", &u, &v); 

        struct Node *p = malloc(sizeof(struct Node)); 

        p->vertex = v; 

        p->next = adj[u]; 

        adj[u] = p; 

        p = malloc(sizeof(struct Node)); 

        p->vertex = u; 

        p->next = adj[v]; 

        adj[v] = p; 

    } 

    for (int i = 0; i < n; i++) { 

        printf("%d: ", i); 

        struct Node *p = adj[i]; 

        while (p) { 

            printf("%d -> ", p->vertex); 

            p = p->next; 

        } 

        printf("NULL\n"); 

    } 

    return 0; 

} 