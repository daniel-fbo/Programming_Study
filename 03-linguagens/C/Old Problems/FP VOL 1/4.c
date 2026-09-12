//idade dos 3 filhos somados = idade mãe
#include <stdio.h>
int main(){
    int mae, filho1, filho2, filho3;
    scanf("%d %d %d",&mae, &filho1, &filho2);
    filho3 = mae  - filho1 - filho2;
    if(filho1 >= filho2 && filho1 >= filho3){
        printf("%d", filho1);
    } else if (filho2 >= filho1 && filho2 >= filho3){
        printf("%d", filho2);
    } else{
        printf("%d\n", filho3);
    }
    return 0;
}