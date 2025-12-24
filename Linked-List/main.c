#include <stdio.h>
#include "list.h"

int main() {
    start list;
    int choice, data, key;

    // Initialize the list
    initList(&list);

    while (1) {
        printf("\nLINKED LIST MENU \n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Delete by Value\n");
        printf("4. Display List\n");
        printf("5. Length of List\n");
        printf("6. Search Element\n");
        printf("7. Reverse List\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                insertAtBeginning(&list, data);
                break;

            case 2:
                printf("Enter data: ");
                scanf("%d", &data);
                insertAtEnd(&list, data);
                break;

            case 3:
                if (list.head == NULL) {
                    printf("List is empty. Nothing to delete.\n");
                    break;
                }
                printf("Enter value to delete: ");
                scanf("%d", &key);
                deleteByValue(&list, key);
                break;
                
            case 4:
                display(&list);
                break;

            case 5:
                printf("Length of list: %d\n", length(&list));
                break;

            case 6:
                if (list.head == NULL) {
                    printf("List is empty.\n");
                    break;
                }
                printf("Enter value to search: ");
                scanf("%d", &key);
                if (search(&list, key))
                    printf("Element found\n");
                else
                    printf("Element not found\n");
                break;

            case 7:
                if (list.head == NULL) {
                    printf("List is empty.\n");
                    break;
                }
                reverseList(&list);
                printf("List reversed successfully\n");
                break;

            case 8:
                freeList(&list);
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
