#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void j(int *linha, int *coluna, char texto[][1001], int L);
void k(int *linha, int *coluna, char texto[][1001]);
int main(){
    int L, C1, C2, *linha, *coluna;
    linha = malloc(4);
    coluna = malloc(4);
    char texto[1001][1001], tecla;

    scanf("%d",&L);
    for(int i=0;i<L;i++){
        scanf(" %[^\n]",texto[i]);
    }
    scanf("%d %d",&C1,&C2);
    *linha = C1;
    *coluna = C2;

    while(scanf(" %c",&tecla)==1){
        if (tecla == 'j'){
            j(linha, coluna, texto,L);
        } else{
            k(linha, coluna, texto);
        }
    }
    free (linha);
    free (coluna);
    return 0;
}



void j(int *linha, int *coluna, char texto[][1001], int L){
    if (*linha < L) {
        (*linha)++; 
    }
    int tamString = strlen(texto[*linha-1]);
    int c_viz = *coluna; 
    
    if (c_viz > tamString) c_viz = tamString;

    printf("%d %d %c\n", *linha, c_viz, texto[*linha-1][c_viz-1]);
}

void k(int *linha, int *coluna, char texto[][1001]){
    if (*linha > 1) {
        (*linha)--; 
    }

    int tamString = strlen(texto[*linha-1]);
    int c_viz = *coluna;
    
    if (c_viz > tamString) c_viz = tamString;

    printf("%d %d %c\n", *linha, c_viz, texto[*linha-1][c_viz-1]);
}