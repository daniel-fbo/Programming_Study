//P0 nn faz parte da cadeia ; podem haver mais de um P0
//um vetor com o i dos indices sendo cada paciente
//P é inutil, pois se um paciente nn está em nenhuma cadeia ele é P0 pois tds sao infectados
//retirar do vetor tds os pacientes em cadeias

#include <stdio.h>

int main(){
    int vetN[1001], N, C, P, I, Xi[1001];
    scanf(" %d %d", &N, &C);

    for(int i = 0; i < N; i++){
        vetN[i] = i+1;
    }

    for(int i = 0 ; i < C ; i++){
        scanf(" %d %d", &P, &I);

        for(int j=0; j<I;j++){
            scanf(" %d", &Xi[j]);
            int temp = Xi[j];
            vetN[temp-1] = 0;
        }
    }

    for(int i = 0; i<N;i++){
        if (vetN[i]!=0){
            printf("%d\n", vetN[i]);
        }
    }
    

    return 0;
}
