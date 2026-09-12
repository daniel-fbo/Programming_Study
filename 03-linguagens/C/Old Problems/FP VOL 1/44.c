#include <stdio.h>

int main(){
    int numTotal, tamanhos[1001], numP, numM;
    scanf("%d",&numTotal);
    for(int i=0;i<numTotal;i++){scanf(" %d",&tamanhos[i]);}
    scanf(" %d %d",&numP,&numM);
    int totalP=0;
    for(int i=0;i<numTotal;i++){
        if(tamanhos[i]==1){
            totalP++;
        }
    }
    if(totalP==numP){
        printf("S\n");
    } else{
        printf("N\n");
    }
    return 0;
}