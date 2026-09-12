//determinar o pico e a sua posição

#include <stdio.h>

int main(){
    int numBlocos, alturas[1001];
    int maiorBloco = 0, posMaior = 0;
    scanf("%d", &numBlocos);
    for (int i = 0; i<numBlocos; i++){scanf("%d", &alturas[i]);} 

    for(int i=0; i<numBlocos; i++){
        if (alturas[i] > maiorBloco){
            maiorBloco = alturas[i];
        }
    } 

    for(int i=0; i<numBlocos; i++){
        if (alturas[i] == maiorBloco){
            posMaior = i;
            break;
        }
    }    

    if (posMaior == 0 || posMaior == numBlocos - 1) {
        printf("Algo errado na muralha..."); 
        return 0;
    }    


    for(int i=0; i<posMaior; i++){
        if (alturas[i] >= alturas[i+1]){
            printf("Algo errado na muralha...");
            return 0;
        }
    }
    
    for(int i=posMaior; i<numBlocos-1; i++){
        if (alturas[i] <= alturas[i+1]){
            printf("Algo errado na muralha...");
            return 0;
        }
    }    



    printf("Muralha segura!");
    return 0;
}
