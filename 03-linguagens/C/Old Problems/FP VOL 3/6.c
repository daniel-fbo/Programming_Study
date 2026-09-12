#include<stdio.h>

int main(){
    long long N,num,M[1000001]={0};
    scanf("%lld",&N);
    for (long long i=0;i<N;i++){
        scanf(" %lld",&num);
        M[num-1]++;
        if (M[num-1]==2){
            printf("%lld",num);
            return 0;
        }
    } 
    return 0;
}