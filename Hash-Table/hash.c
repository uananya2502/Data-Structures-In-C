#include <stdio.h>
#include <stdlib.h>
#include "hash.h"

// Initialize hash table 
void initHashTable(hashTable* ht) {
    for (int i = 0; i < SIZE; i++)
        ht->table[i] = NULL;
}

// Simple hash function 
int hashFunction(int key) {
    return key % SIZE;
}

// Insert key
void insert(hashTable* ht, int key) {
    int index = hashFunction(key);

    node* newNode = (node*)malloc(sizeof(node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        return;
    }

    newNode->key = key;
    newNode->next = ht->table[index];
    ht->table[index] = newNode;

    printf("Inserted %d at index %d\n", key, index);
}

// Search key
int search(hashTable* ht, int key) {
    int index = hashFunction(key);
    node* temp = ht->table[index];

    while (temp) {
        if (temp->key == key)
            return 1;
        temp = temp->next;
    }
    return 0;
}

// Delete key 
void deleteKey(hashTable* ht, int key) {
    int index = hashFunction(key);
    node* temp = ht->table[index];
    node* prev = NULL;

    while (temp && temp->key != key) {
        prev = temp;
        temp = temp->next;
    }

    if (!temp) {
        printf("Key not found\n");
        return;
    }

    if (!prev)
        ht->table[index] = temp->next;
    else
        prev->next = temp->next;

    free(temp);
    printf("Deleted %d\n", key);
}

// Display hash table 
void display(hashTable* ht) {
    for (int i = 0; i < SIZE; i++) {
        printf("Index %d: ", i);
        node* temp = ht->table[i];
        while (temp) {
            printf("%d -> ", temp->key);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

// Free hash table 
void freeHashTable(hashTable* ht) {
    for (int i = 0; i < SIZE; i++) {
        node* temp = ht->table[i];
        while (temp) {
            node* del = temp;
            temp = temp->next;
            free(del);
        }
        ht->table[i] = NULL;
    }
}
