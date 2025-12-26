#include <stdio.h>
#include "stack.h"

int main() {
    stack s;
    int choice, value;

    initStack(&s);

    while (1) {
        printf("\nSTACK (LINKED LIST) MENU\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                push(&s, value);
                break;

            case 2:
                pop(&s);
                break;

            case 3:
                peek(&s);
                break;

            case 4:
                display(&s);
                break;

            case 5:
                freeStack(&s);
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
