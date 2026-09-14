#include <stdio.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

int count(struct node *root)
{
    if(root == NULL)
        return 0;

    return 1 + count(root->left) + count(root->right);
}

int main()
{
    struct node n1, n2, n3;

    n1.data = 10;
    n2.data = 20;
    n3.data = 30;

    n1.left = &n2;
    n1.right = &n3;

    n2.left = NULL;
    n2.right = NULL;

    n3.left = NULL;
    n3.right = NULL;

    printf("Number of nodes = %d", count(&n1));

    return 0;
}