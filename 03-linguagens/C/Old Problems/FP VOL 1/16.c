//cabines nn sao uma balança, a mais pesada pode subir, basta a dif de peso ser no max 8 kg
//se não há uma caixa de até 8kg nao funcioona

#include <stdio.h>

int main(){
    int numCaixas, pesos[10001];
    scanf("%d", &numCaixas);
    for (int i = 0; i<numCaixas; i++){scanf("%d", &pesos[i]);}

    if(pesos[0] > 8){
        printf("N");
        return 0;
    }

    for (int i = 0; i < numCaixas-1;i++){
        if (pesos[i+1] > pesos[i]+8){
            printf("N");
            return 0;
        }
    }   
    
    printf("S");
    return 0;
}
