#include <stdio.h>
int funcao(int N);
int main(){
    int N;
    scanf("%d",&N);
    printf("%d pecas",funcao(N+1));

    return 0;
}
int funcao(int N){
    if(N>0){
        return N + funcao(N-1);
    } else {
        return N;
    }
}