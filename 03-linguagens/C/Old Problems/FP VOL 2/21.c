#include <stdio.h>

int main(){
    int N,M,P,G,C,total=0;
    scanf("%d %d",&N,&M);
    for(int i=0;i<N;i++){
        scanf(" %d %d %d",&P, &G, &C);
        total += (P*4) + (G*9) + (C*4);
    }
    printf("%d\n", M-total);
    return 0;
}