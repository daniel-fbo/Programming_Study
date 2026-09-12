// 52 cartas ; 4 naipes H,D,S,C ; 13 faces (A,1-9,T,J,Q,K)
// 4 linhas de entrada, carta = 2char (face-naipe)
// ler as quatro linhas ; verificar o valor da carta ; detectar se a pontuação extrapola 21
// armazenar as cartas em um vetor ; ler o vetor anotando o valor das cartas PESSIMA OTIMIZACAO
// ler as cartas em sequencia com o EOF

#include <stdio.h>

int getCardValue (int face){
    if (face == 'A'){
        return 1;
    } else if (face == 'T' || face == 'J' || face == 'Q' || face == 'K' ){
        return 10;
    } else {
        return face - '0';
        //return face - 48;
    } 
}    

int main(){
    char card[4];
    int maxPoints = 0;
    while (scanf("%s",card) != EOF){
        int value = getCardValue(card[0]);
        if (maxPoints + value <= 21){
            maxPoints += value;
        } else{
            break;
        }
    }
    printf("%d\n", maxPoints);
    return 0;
}

