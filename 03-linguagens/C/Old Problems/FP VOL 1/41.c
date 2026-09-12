#include <stdio.h>

int main(){
    int quotaFixa, quota, sobra, numMeses, qtdUsada[101];
    scanf("%d %d", &quotaFixa, &numMeses);
    quota=quotaFixa;
    for(int i=0;i<numMeses;i++){scanf(" %d",&qtdUsada[i]);}
    for(int i=0;i<numMeses;i++){
        sobra = quota - qtdUsada[i];
        quota=quotaFixa+sobra;
    }
    printf("%d", quota);
    return 0;
}