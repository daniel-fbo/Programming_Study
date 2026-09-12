#include <stdio.h>

int main(){
    int matrix[501][501]={0};
    int tipos, tamanhos;
    scanf("%d %d", &tipos, &tamanhos);

    for(int i=0; i<tipos; i++){
        for(int j=0; j<tamanhos; j++){
                int temp;
                scanf(" %d", &temp);
                matrix[i][j]=temp;
        }
    }

    int qtdPedidos, qtdVendidas=0;
    scanf(" %d", &qtdPedidos);
    int tipo, tamanho;

    for(int i=0; i<qtdPedidos; i++){
        scanf(" %d %d", &tipo, &tamanho);
        if(matrix[tipo-1][tamanho-1]>0){
            qtdVendidas++;
            matrix[tipo-1][tamanho-1]--;
        }
    }
    printf("%d", qtdVendidas);

    return 0;
    }
