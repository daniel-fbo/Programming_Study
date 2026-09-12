#include <stdio.h>

int main(){
    int N, M;
    scanf("%d %d", &N,&M);
    long long sum = (long long) M;
    for (int i=0; i<N-1;i++){
        sum *= M-1;
    }
    printf("%lld\n",sum);
    return 0;
}