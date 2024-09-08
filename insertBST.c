#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n; // creating a node pointer
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;  // Setting the data
    n->left = NULL;  // Setting the left and right children to NULL
    n->right = NULL; // Setting the left and right children to NULL
    return n;        // Finally returning the created node
}

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

void insert(struct node *root, int key)
{
    struct node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (key == root->data)
        {
            printf("Cannot insert %d, already in BST", key);
            return;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    struct node *new = createNode(key);
    if (key < prev->data)
    {
        prev->left = new;
    }
    else
    {
        prev->right = new;
    }
}

int main()
{

    // Constructing the root node - Using Function (Recommended)
    struct node *p = createNode(11);
    struct node *p1 = createNode(4);
    struct node *p2 = createNode(15);
    struct node *p3 = createNode(2);
    struct node *p4 = createNode(7);
    // Finally The tree looks like this:
    //      11
    //     / \
    //    4   15
    //   / \
    //  2   7

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
     inOrder(p);
    insert(p, 1);
    insert(p, 5);
    insert(p, 14);
    printf("\n");
    inOrder(p);

}