// as 4 areas precisam ser retangulares ; as avenidas formam um + (nao literalmente)
// area total forma um retangulo
// por nn sabermos o tamannho dos lados, oq pode ser inferido sao relações diretas entre as áreas
// pensei no teorema de tales
// ordenar as áreas por tamanho (maior pra menor)
// nos exemplos do moj, um padrão que se repete é que a proporção entre a primeira e a segunda é igual a proporção entre a terceira e quarta
// CASO O MOJ NN ACEITE, MUDAR A IGUALDADE DE A/B = C/D PARA AD = BC
#include <stdio.h>

int main(){
    double areas[4];
    scanf("%lf %lf %lf %lf", &areas[0], &areas[1], &areas[2], &areas[3]);
    
    for(int i = 0; i < 4; i++){
        for (int j = i+1; j < 4; j++){
            if (areas[j] > areas[i]){
                double temp = areas[j];
                areas[j] = areas[i];
                areas[i] = temp; 
            }
        }
    }

    double argumento1 = areas[3]/areas[2];
    double argumento2 = areas[1]/areas[0];

    if(argumento1 == argumento2){
        printf("S");
    } else{
        printf("N");
    }

    return 0;
}
