#include <stdio.h>

int main(){
    long long int estoque[10000]={0};
    int id;
    long long int pecas;
    int qtdModelos,qtdPedidos;

    scanf("%d",&qtdModelos);
    for (int i=0; i<qtdModelos;i++){
        scanf("%d %lld",&id,&pecas);
        estoque[id] += pecas;
    }

    scanf("%d",&qtdPedidos);
    for (int i=0; i<qtdPedidos;i++){
        scanf("%d %lld",&id,&pecas);
        if (pecas <= estoque[id]){
            estoque[id]-=pecas;
        } else{
            printf("Nao\n");
            return 0;
        }
    }

    printf("Sim\n");
    return 0;
}