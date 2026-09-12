#include <stdio.h>
int main(){
    int T, B, N, P[1001];
    scanf("%d",&T);
    for (int i=0; i<T; i++){
        scanf(" %d %d", &B, &N);
        if (N>3){
            P[i] = (B + 100*(N-3));
        } else{
            P[i] = B;
        }
    
        if (N>7){
            P[i] *= 1.5;
        } else if (N>3) {
            P[i] *= 1.25;
        }
    }

    for (int i=0; i<T; i++){
        if (P[i]>1){
            printf("Caso %d: %d ponto\n",i+1,P[i]);
        } else{
            printf("Caso %d: %d pontos\n",i+1,P[i]);
        }
    }    

    return 0;
}