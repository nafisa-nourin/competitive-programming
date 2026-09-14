#include <stdio.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

int leafCount(struct node *root)
{
    if(root == NULL)
        return 0;

    if(root->left == NULL && root->right == NULL)
        return 1;

    return leafCount(root->left) + leafCount(root->right);
}

int main()
{
    struct node n1, n2, n3, n4, n5;

    n1.data = 10;
    n2.data = 20;
    n3.data = 30;
    n4.data = 40;
    n5.data = 50;

    n1.left = &n2;
    n1.right = &n3;

    n2.left = &n4;
    n2.right = &n5;

    n3.left = NULL;
    n3.right = NULL;

    n4.left = NULL;
    n4.right = NULL;

    n5.left = NULL;
    n5.right = NULL;

    printf("Number of leaf nodes = %d", leafCount(&n1));

    return 0;
}