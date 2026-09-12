#include <stdio.h>
long long recursao(long long a);

int main(){
    long long N;
    double M, sum = 0, nota_atual; 
    scanf("%lld", &N);
    for (long long i = 0; i < N; i++){
        scanf(" %lf", &nota_atual);
        sum += (double) nota_atual * (i + 1);
    }
    M = (double) sum / recursao(N); 
    
    if(M >= 5){
        printf("Sim\n");
        printf("%.2lf\n", M);
    } else {
        printf("Nao\n");
        printf("%.2lf\n", M);
    }
    return 0;
}

long long recursao(long long a){
    if(a > 1){
        return a + recursao(a - 1);
    } else {
        return 1;
    }
}