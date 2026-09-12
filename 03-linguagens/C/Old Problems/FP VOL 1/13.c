//fatorar um numero por primos (em ordem crescente) ; multiplicação das multiplicidade(+1) de cada fator primo
//SE O MOJ NÃO ACEITAR - MUDAR A CONDIÇÃO DO FOR PARA I*I E ADICIONAR UM IF DE NUM > 1 NO FINAL QUE DUPLICA O NUMDIV

#include <stdio.h>

int main(){
    int num, repsDiv = 0, numDiv = 1;
    scanf("%d", &num);

        for(int i=2; i <= num; i++){

            if (num%i==0){
                repsDiv++;
                while (num%i==0){
                    num /= i;
                    repsDiv++;
                }
                numDiv *=  repsDiv;
                repsDiv=0;
            }
        }

    printf("%d", numDiv);
    return 0;
}
