#include <stdio.h>

int main(){
    int N,A[10001], tempN, sum;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf(" %d",&A[i]);
    }
    sum = A[0]+A[N-1];
    tempN=N; 

    for(int i=0;i<=tempN;i++){
        if(A[i]+A[tempN-1]!=sum){
            printf("N\n");
            return 0;
        }
        tempN--;
    }

    printf("S\n");

}