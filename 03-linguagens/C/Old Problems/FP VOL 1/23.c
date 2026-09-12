#include <stdlib.h>
#include <stdio.h>
typedef struct celula {
  int dado;
  struct celula *prox;
} celula;
int empilha(celula *p,int x);
int desempilha(celula *p,int *x);
int soma(celula *head);

int main(){
    celula* head;
    head = malloc(sizeof(celula));
    if (head!=NULL){
        head->prox = NULL;
    }
    int totalNum,num;
    scanf("%d", &totalNum);
    for(int i = 0;i<totalNum;i++){
        scanf(" %d", &num);
        if (num==0){
            desempilha(head,&num);
        } else{
            empilha(head,num);
        }
    }

    printf("%d\n", soma(head));
    return 0;
}


int empilha(celula *p,int x){
   celula *novo;
   novo = malloc(sizeof(celula));
   if(novo==NULL){
    return 0;
   }
   novo -> dado = x;
   novo -> prox = p -> prox;
   p -> prox = novo;
   return 1;

}
int desempilha(celula *p,int *y){
    if (p -> prox == NULL){
        return 0;
    }
    celula* velho = p -> prox;
    *y = velho -> dado;
    p -> prox = velho -> prox;
    free(velho);
    return 1;
}
int soma(celula *head){
    celula* temp = head -> prox;
    int sum=0;
    while(temp != NULL){
        sum+= temp -> dado; 
        temp = temp -> prox;
    } 
    return sum;
}