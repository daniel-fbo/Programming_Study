//capitao = 2pessoas

#include <stdio.h>

int main(){
    int numPessoas, numMoedas;
    scanf("%d %d", &numMoedas, &numPessoas);
    numPessoas += 2;
    printf("%d", (numMoedas/numPessoas)*2);

    return 0;
    }
