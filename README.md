# Data Structures in C

This repository contains modular implementations of fundamental data structures in the C programming language, with an emphasis on clarity, correctness, and structured design.  
Each data structure is implemented as an independent module following standard C programming practices.

---

## Overview

The purpose of this repository is to serve as a well-organized reference for core data structures implemented in C.  
The project demonstrates how classical data structures can be written in a clean, maintainable, and modular manner using header files, source files, and controlled memory management.

---

## Key Characteristics

- Clear separation of interface (`.h`) and implementation (`.c`)
- Consistent module structure across all data structures
- Wrapper structures to manage pointers safely
- Menu-driven programs for controlled execution and testing
- Explicit dynamic memory allocation and deallocation
- Clean Git repository structure with `.gitignore`

---

## Project Structure

```text
Data-Structures-In-C/
│
├── Linked-List/
│   ├── list.h
│   ├── list.c
│   └── main.c
│
├── Stack/
│   ├── stack.h
│   ├── stack.c
│   └── main.c
│
├── Stack_ll/
│   ├── stack.h
│   ├── stack.c
│   └── main.c
│
├── Queue/
│   ├── queue.h
│   ├── queue.c
│   └── main.c
│
├── Queue_ll/
│   ├── queue.h
│   ├── queue.c
│   └── main.c
│
├── Tree/
│   ├── tree.h
│   ├── tree.c
│   └── main.c
│
├── Hash-Table/
│   ├── hash.h
│   ├── hash.c
│   └── main.c
│
├── .gitignore
└── README.md
```

## Implemented Data Structures

### Linked List
- Singly linked list
- Insert at beginning and end
- Delete by value
- Search and reverse operations
- Length calculation

### Stack
- Stack using array
- Stack using linked list
- Push, pop, peek, and display operations

### Queue
- Queue using array
- Queue using linked list
- Enqueue, dequeue, peek, and display operations

### Tree
- Binary Search Tree (BST)
- Node insertion
- Inorder, preorder, and postorder traversals
- Search operation
- Minimum and maximum element retrieval

### Hash Table
- Hash table using separate chaining
- Collision handling with linked lists
- Insert, delete, search, and display operations

## Compilation and Execution
Each data structure is self-contained and can be compiled independently.

Example:

```bash
cd Linked-List
gcc main.c list.c -o LinkedList
./LinkedList

## Design Notes
- Wrapper structures are used to avoid direct manipulation of internal pointers in `main`
- All dynamically allocated memory is explicitly released
- No global variables are used
- Code is written with readability and consistency as primary goals

## Scope and Use
This repository is intended for:
- Understanding core data structures in C
- Academic reference and practice
- Reviewing fundamental data structure implementations
- Demonstrating structured C programming
