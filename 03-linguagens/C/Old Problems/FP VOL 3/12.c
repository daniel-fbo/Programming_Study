#include <stdio.h>
int  main(){
    long long int num,menor=1000000,N,K,V[1001]={0};
    scanf("%lld %lld",&N,&K);
    for(int i=0;i<N;i++){
        scanf(" %lld",&num);
        V[num-1]++;
    }
    for(int i=0;i<K;i++){
        if(V[i]<menor){
            menor=V[i];
        }
    }
    printf("%lld\n",menor);

    return 0;
}