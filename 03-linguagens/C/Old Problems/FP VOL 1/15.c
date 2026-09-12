//nn há iguais consecutivos ; numeros = altura ; 

#include <stdio.h>

int main(){
    int numAlturas, alturas[1001];
    scanf("%d", &numAlturas);
    for(int i = 0;i<numAlturas;i++){scanf("%d", &alturas[i]);}
    
    for(int i = 2; i<numAlturas-1; i++){
        if (alturas[i-1]>alturas[i] && alturas[i] < alturas[i+1]){
            printf("S");
            return 0;
        }
    }
    printf("N");
    return 0;
    }
