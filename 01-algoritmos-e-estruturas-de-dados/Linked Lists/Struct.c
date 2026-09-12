#include "Struct.h"

void *mallocc(size_t size){
    void *ptr = malloc(size);
    if (ptr==NULL){
        printf("Erro na alocação da memória.\n");
        return NULL;
    }
    return ptr;
}
Node *new_node(int data){
    Node *node = (Node*) mallocc(sizeof(Node));
    node -> data = data;
    node -> next = NULL; 
    return node;

}

void print(Node *top){
    Node *temp = (Node*) mallocc(sizeof(Node));
    temp = top;
    while (temp->next!=NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d ", temp->data);
    temp = NULL;
    free(temp);
    return;
}

void free_all(Node **top){
    Node *current = *top;
    Node *next = NULL;
    while (current!=NULL){
        next = current->next;
        free (current);
        current = next;
    }
    *top = NULL;
    return;
}