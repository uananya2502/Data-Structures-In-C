#ifndef TREE_H
#define TREE_H

/* Node structure */
typedef struct node {
    int data;
    struct node* left;
    struct node* right;
} node;

/* Tree wrapper */
typedef struct tree {
    node* root;
} tree;

/* Tree operations */
void initTree(tree* t);
void insert(tree* t, int value);
void inorder(tree* t);
void preorder(tree* t);
void postorder(tree* t);
int search(tree* t, int key);
int findMin(tree* t);
int findMax(tree* t);
void freeTree(tree* t);

#endif // TREE_H
