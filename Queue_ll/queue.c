#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void initQueue(queue* q) {
    q->front = q->rear = NULL;
}

int isEmpty(queue* q) {
    return q->front == NULL;
}

void enqueue(queue* q, int value) {
    node* newNode = (node*)malloc(sizeof(node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        return;
    }

    newNode->data = value;
    newNode->next = NULL;

    if (isEmpty(q)) {
        q->front = q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }

    printf("Enqueued %d\n", value);
}

void dequeue(queue* q) {
    if (isEmpty(q)) {
        printf("Queue Underflow\n");
        return;
    }

    node* temp = q->front;
    printf("Dequeued %d\n", temp->data);

    q->front = temp->next;
    if (q->front == NULL)
        q->rear = NULL;

    free(temp);
}

void peek(queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }
    printf("Front element: %d\n", q->front->data);
}

void display(queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }

    node* temp = q->front;
    printf("Queue elements:\n");
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void freeQueue(queue* q) {
    while (!isEmpty(q))
        dequeue(q);
}
