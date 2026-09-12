#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct node {
    int data;
    struct node *next;
    struct node *prev;
} Node;
void *mallocc(size_t size);
Node *new_node(int data);
void print(Node *head);
void free_all(Node **top);

