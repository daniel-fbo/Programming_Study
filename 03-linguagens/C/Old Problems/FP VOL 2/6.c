#include <stdio.h>

int main(){
    int sum=0, N; 
    while((scanf("%1d", &N))==1){ 
        sum += N;
    }
    if (sum % 3 == 0){
        printf("Sim\n");
    } else{
        printf("Nao\n");
    }
    return 0;
}

