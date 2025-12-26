# Data Structures in C
This repository contains a modular and well-structured implementation of core **Data Structures in C**, developed using standard software engineering practices.  
The project is intended for **academic use, interview preparation, and portfolio demonstration**.

## Overview
The objective of this project is to provide clear, maintainable, and interview-ready implementations of fundamental data structures using the C programming language.  
Each data structure is implemented in a separate module with proper abstraction using header files.

## Features
- Modular structure using `.h`, `.c`, and `main.c`
- Clear separation of interface and implementation
- Wrapper structures to manage pointers safely
- Menu-driven programs for testing and demonstration
- Proper dynamic memory management
- Clean Git repository with `.gitignore`
- Suitable for labs, exams, and interviews

## Project Structure
Data-Structures-In-C/
│
├── Linked-List/
│ ├── list.h
│ ├── list.c
│ └── main.c
│
├── Stack/
│ ├── stack.h
│ ├── stack.c
│ └── main.c
│
├── Stack_ll/
│ ├── stack.h
│ ├── stack.c
│ └── main.c
│
├── Queue/
│ ├── queue.h
│ ├── queue.c
│ └── main.c
│
├── Queue_ll/
│ ├── queue.h
│ ├── queue.c
│ └── main.c
│
├── Tree/
│ ├── tree.h
│ ├── tree.c
│ └── main.c
│
├── Hash-Table/
│ ├── hash.h
│ ├── hash.c
│ └── main.c
│
├── .gitignore
└── README.md

## Implemented Data Structures

### Linked List
- Singly linked list
- Insert at beginning and end
- Delete by value
- Search operation
- Reverse operation
- Length calculation

### Stack
- Stack using array
- Stack using linked list
- Operations: push, pop, peek, display

### Queue
- Queue using array
- Queue using linked list
- Operations: enqueue, dequeue, peek, display

### Tree
- Binary Search Tree (BST)
- Insert nodes
- Inorder, preorder, and postorder traversals
- Search operation
- Find minimum and maximum values

### Hash Table
- Hash table using separate chaining
- Collision handling using linked lists
- Insert, delete, search, and display operations

## Compilation and Execution
Each module can be compiled independently.
