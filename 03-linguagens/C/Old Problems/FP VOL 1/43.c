#include <stdio.h>

int main(){
    int qtdToys, votos[101], maiorVoto=0;
    scanf("%d",&qtdToys);
    for(int i=0; i<qtdToys;i++){
        scanf(" %d",&votos[i]);
    }
    for(int i=0; i<qtdToys;i++){
        if(votos[i]>maiorVoto){
            maiorVoto=votos[i];
        }
    }


    // nem precisei usar int matrix[maiorVoto][qtdToys];

    for(int i=maiorVoto; i>0;i--){
        for(int j=0; j<qtdToys;j++){
            if(i>votos[j]){
                printf("%d ",0);
            } else{
                printf("%d ",1);
            }

        }
        printf("\n");
    }

    return 0;
}