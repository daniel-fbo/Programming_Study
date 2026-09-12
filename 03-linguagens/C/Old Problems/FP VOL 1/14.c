#include <stdio.h>

int main(){
    int dimensoes[5];
    for(int i=0; i<4;i++){scanf("%d",&dimensoes[i]);}
    if (dimensoes[0]*dimensoes[1] > dimensoes[2]*dimensoes[3]){
        printf("%d",dimensoes[0]*dimensoes[1]);
    } else{
        printf("%d",dimensoes[2]*dimensoes[3]);
    }
    return 0;
}
