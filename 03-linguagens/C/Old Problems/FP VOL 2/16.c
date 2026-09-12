#include <stdio.h>

int main(){
    int N,tempK=0,K,A[500], C, tempC=100;
    scanf("%d %d",&N,&K);
    for (int i=0;i<N;i++){
        scanf(" %d",&A[i]);
    }

    while (tempK < K){
        tempK=0;
        for(int i=0;i<N;i++){
            if(A[i]>=tempC){
                tempK++;
            }
        }
        tempC--;
    }

    C = tempC+1;
    printf("%d\n",C);
    return 0;
}