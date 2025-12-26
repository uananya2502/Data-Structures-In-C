#include <stdio.h>
#include "hash.h"

int main() {
    hashTable ht;
    int choice, key;

    initHashTable(&ht);

    while (1) {
        printf("\n===== HASH TABLE MENU =====\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Search\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter key: ");
                scanf("%d", &key);
                insert(&ht, key);
                break;

            case 2:
                printf("Enter key to delete: ");
                scanf("%d", &key);
                deleteKey(&ht, key);
                break;

            case 3:
                printf("Enter key to search: ");
                scanf("%d", &key);
                if (search(&ht, key))
                    printf("Key found\n");
                else
                    printf("Key not found\n");
                break;

            case 4:
                display(&ht);
                break;

            case 5:
                freeHashTable(&ht);
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
