#include <stdio.h>

int main(){
    int qtdBact=1,taxaMult, qtdMaxBact, dias=0;
    scanf("%d %d", &qtdMaxBact, &taxaMult);

    for(int i=0; qtdBact<=qtdMaxBact;i++){
        qtdBact*=taxaMult;
        dias++;
   }

    printf("%d\n", dias-1);

    return 0;
}