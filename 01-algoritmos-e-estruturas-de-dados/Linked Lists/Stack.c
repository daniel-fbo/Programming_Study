#include "Struct.h"

typedef struct{
    Node *top;
} Stack;
bool isEmpty(Stack *stack);
void push(Stack *stack, int data);
int peek(Stack *stack);
int pop(Stack *stack);


int main(){
    Stack *stack = malloc(sizeof(Stack));
    stack -> top = NULL;
    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    push(stack, 4);
    push(stack, 5);
    int popp = pop(stack);
    printf("%d\n", popp);
    int peekk = peek(stack);
    printf("%d\n", peekk);
    print(stack->top);
    free_all(&(stack->top));
    free(stack);
    return 0;
}

bool isEmpty(Stack *stack){
    return (stack->top == NULL) ? true : false;
}

void push(Stack *stack, int data){
    Node *node = new_node(data);
    node->next = stack->top;
    stack->top = node;
    return;
}

int peek(Stack *stack){
    if (isEmpty(stack)) return -1;
    return stack->top->data;
}

int pop(Stack *stack){
    if (isEmpty(stack)) return -1;
    Node *popped = stack->top;
    int data_p = stack->top->data;
    stack->top = stack->top->next;
    free(popped);
    return data_p;
}