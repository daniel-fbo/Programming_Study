// 1 emissor e 3 sensores ; verificar a cada volta completa

#include <stdio.h>
int main(){
    int distancia;
    scanf("%d", &distancia);
    distancia -= 3;
    if (distancia < 5){
        printf("%d\n", distancia - 2);
    } else if (distancia % 8 == 3){
        printf("1\n");
    } else if (distancia % 8 == 4){
        printf("2\n");
    } else if (distancia % 8 == 5){
        printf("3\n");
    }
    return 0;
}
