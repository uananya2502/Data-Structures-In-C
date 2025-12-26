#ifndef HASH_H
#define HASH_H

#define SIZE 10

/* Node for chaining */
typedef struct node {
    int key;
    struct node* next;
} node;

/* Hash table wrapper */
typedef struct hashTable {
    node* table[SIZE];
} hashTable;

/* Hash table operations */
void initHashTable(hashTable* ht);
int hashFunction(int key);
void insert(hashTable* ht, int key);
void deleteKey(hashTable* ht, int key);
int search(hashTable* ht, int key);
void display(hashTable* ht);
void freeHashTable(hashTable* ht);

#endif // HASH_H
