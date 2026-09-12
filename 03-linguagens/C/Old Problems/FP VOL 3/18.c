#include <stdio.h>
long long int conta7(long long N);
int  main(){
    long long N;
    scanf("%lld",&N);
    printf("%lld\n",conta7(N));
    return 0;
}

long long conta7(long long N){
    int a=0;
    if(N<10){
        if(N==7){
            return 1;
        } else{
            return 0;
        }
    }
    if(N%10==7){
        a=1;
        return a + conta7(N/10);
    } else{
        return a+conta7(N/10);
    }    
}