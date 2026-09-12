#include <stdio.h>

int main(){
    int infectInicial, totalInfect, dia=0, fatorRepro, qtdMax;
    scanf("%d %d %d", &infectInicial, &fatorRepro, &qtdMax);
    
    totalInfect = infectInicial;
    int infectDiario = infectInicial;
    while(totalInfect < qtdMax){
        infectDiario *= fatorRepro; 
        totalInfect += infectDiario; 
        dia++;
    }
    printf("%d\n", dia);
    return 0;
}