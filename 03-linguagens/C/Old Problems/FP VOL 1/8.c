//deposito/saque diário ; saldo pode ser negativo mas maior que um valor X

#include <stdio.h>

int main(){
    int dias, saldo, menorSaldo;
    scanf("%d %d", &dias, &saldo);
    menorSaldo = saldo;
    for(int i = 0; i < dias; i++){
        int movimentacao;
        scanf("%d", &movimentacao);
        saldo += movimentacao;
        if (saldo < menorSaldo){
            menorSaldo = saldo;
        }
    }
    printf("%d", menorSaldo);
    return 0;
}
