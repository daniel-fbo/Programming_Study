#include <stdio.h>

int main(){
    int tamLado, qtdPed = 1;
    scanf("%d", &tamLado);

    while (tamLado >= 2){
        qtdPed *= 4;
        tamLado /= 2;
    }

    printf("%d", qtdPed);
    return 0;
}
