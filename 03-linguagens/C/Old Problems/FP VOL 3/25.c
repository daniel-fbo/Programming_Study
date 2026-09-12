#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
  int dado;
  struct celula *prox;
} celula;

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