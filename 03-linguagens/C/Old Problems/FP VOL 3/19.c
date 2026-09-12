#include <stdio.h>
long long int f91(long long int N);
int main(){
    long long int N=1;
    while(N!=0){
        scanf("%lld",&N);
        if (N!=0){
            printf("f91(%lld) = %lld\n",N,f91(N));
        }
    }
    printf("\n");
    return 0;
}
long long int f91(long long int N){
    if (N>100){
        return N-10;
    } else{
        return f91(f91(N+11));
    }
}