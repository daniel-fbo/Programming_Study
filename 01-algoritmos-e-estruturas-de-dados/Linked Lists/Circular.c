#include "Struct.h"

typedef struct{
    Node *head;
    Node *tail;
} Circular;
bool isEmpty(Circular *circular);
void insertion_beg(Circular *circular, int data);
void insertion_end(Circular *circular, int data);
void insertion_especific(Circular *circular, int data);
int delete_beg(Circular *circular);
int delete_end(Circular *circular);
int delete_especific(Circular *circular);
Node *search_idx(Circular *circular, int pos);

int main(){
    Circular *circular = mallocc(sizeof(Circular));
    insertion_beg(circular, 1); 
    insertion_beg(circular, 2); 
    insertion_end(circular, 11);
    insertion_end(circular, 12);   
    
    print(circular->head);
    free_all(&(circular->head));
    free(circular);
    return 0;
}
bool isEmpty(Circular *circular){
    return (circular->head == NULL) ? true : false;
}
Node *search_idx(Circular *circular, int pos){
    int idx = 0;
    Node *temp = circular->head;
    while (idx < pos-1) {
        temp = temp->next;
        idx++;
    }
    return temp;
}

void insertion_beg(Circular *circular, int data){
    Node *node = new_node(data);
    if (isEmpty(circular)){
        node->next = node;
        circular->tail = node;
    } else{
        node->next = circular->head;
        circular->tail->next = node;
    }
    circular->head = node;
}
void insertion_end(Circular *circular, int data){
    Node *node = new_node(data);
    if (isEmpty(circular)){
        node->next = node;  
        circular->head = node;
    } else{ 
        circular->tail->next = node;
        node->next = circular->head;
    }
    circular->tail = node;
}
void insertion_especific(Circular *circular, int pos){
    
}

