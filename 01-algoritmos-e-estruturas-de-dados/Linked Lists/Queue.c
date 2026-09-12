#include "Struct.h"

typedef struct{
    Node* head;
    Node* tail;
} Queue;

bool isEmpty(Queue *queue);
void enqueue(Queue *queue, int data);
int dequeue(Queue* queue);
int peek(Queue *queue);

int main(){
    Queue*queue = malloc(sizeof(Queue));
    queue -> head = NULL;
    queue -> tail = NULL;
    enqueue(queue, 1);
    enqueue(queue, 2);
    int ddata = dequeue(queue);
    printf("%d\n", ddata);
    enqueue(queue, 4);
    dequeue(queue);
    int dataa = peek(queue);
    printf("%d\n", dataa);
    enqueue (queue, 5);
    print(queue->head);
    free_all(&(queue->head));
    free(queue);
    return 0;
}
bool isEmpty(Queue *queue){
    return (queue->head == NULL) ? true : false;
}

void enqueue(Queue *queue, int data){
    Node *node = new_node(data);
    if (isEmpty(queue)){
        queue->head = node;
    } else{
      queue->tail->next = node;  
    }
    queue->tail = node;
    return;
}

int dequeue(Queue *queue){
    Node *dequeued = queue->head;
    int deq_data = dequeued->data;
    queue->head = queue->head->next;
    free(dequeued);
    return deq_data;
}

int peek(Queue *queue){
    return queue->head->data;
}
