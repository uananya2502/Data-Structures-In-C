#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

// Helper functions
static node* createNode(int value) {
    node* newNode = (node*)malloc(sizeof(node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

static node* insertNode(node* root, int value) {
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insertNode(root->left, value);
    else if (value > root->data)
        root->right = insertNode(root->right, value);

    return root;
}

// Initialize tree 
void initTree(tree* t) {
    t->root = NULL;
}

// Insert value 
void insert(tree* t, int value) {
    t->root = insertNode(t->root, value);
}

// Traversals 
static void inorderTrav(node* root) {
    if (root) {
        inorderTrav(root->left);
        printf("%d ", root->data);
        inorderTrav(root->right);
    }
}

static void preorderTrav(node* root) {
    if (root) {
        printf("%d ", root->data);
        preorderTrav(root->left);
        preorderTrav(root->right);
    }
}

static void postorderTrav(node* root) {
    if (root) {
        postorderTrav(root->left);
        postorderTrav(root->right);
        printf("%d ", root->data);
    }
}

void inorder(tree* t) {
    if (!t->root) {
        printf("Tree is empty\n");
        return;
    }
    inorderTrav(t->root);
    printf("\n");
}

void preorder(tree* t) {
    if (!t->root) {
        printf("Tree is empty\n");
        return;
    }
    preorderTrav(t->root);
    printf("\n");
}

void postorder(tree* t) {
    if (!t->root) {
        printf("Tree is empty\n");
        return;
    }
    postorderTrav(t->root);
    printf("\n");
}

// Search 
static int searchNode(node* root, int key) {
    if (!root) return 0;
    if (root->data == key) return 1;
    if (key < root->data)
        return searchNode(root->left, key);
    else
        return searchNode(root->right, key);
}

int search(tree* t, int key) {
    return searchNode(t->root, key);
}

// Find minimum 
int findMin(tree* t) {
    node* curr = t->root;
    if (!curr) {
        printf("Tree is empty\n");
        return -1;
    }
    while (curr->left)
        curr = curr->left;
    return curr->data;
}

// Find maximum 
int findMax(tree* t) {
    node* curr = t->root;
    if (!curr) {
        printf("Tree is empty\n");
        return -1;
    }
    while (curr->right)
        curr = curr->right;
    return curr->data;
}

// Free tree 
static void freeNodes(node* root) {
    if (root) {
        freeNodes(root->left);
        freeNodes(root->right);
        free(root);
    }
}

void freeTree(tree* t) {
    freeNodes(t->root);
    t->root = NULL;
}
