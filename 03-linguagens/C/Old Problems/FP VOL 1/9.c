#include <stdio.h>
//300 competidores e 2 dias de prova ; 1 tomada ; 4 reguas de tomada 
//um buraco duma tomada é usado pra conectar outra
int main(){
    int t1, t2, t3, t4;
    scanf("%d %d %d %d", &t1, &t2, &t3, &t4);
    int total = t1+t2+t3+t4-3;
    printf("%d", total);
    return 0;
}
