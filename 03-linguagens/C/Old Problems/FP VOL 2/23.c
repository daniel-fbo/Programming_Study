#include <stdio.h>

int main(){
    int N,num,pares[10000],impares[10000],qtdP=0,qtdI=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf(" %d",&num);
        if(num%2==0){
            pares[qtdP]=num;
            qtdP++;
        } else{
            impares[qtdI]=num;
            qtdI++;            
        }
    }
    for(int i=0;i<qtdP;i++){
        if(i==0){
           printf("%d",pares[i]);
        } else{
            printf(" %d",pares[i]);
        }
    }
    printf("\n");

    for(int i=0;i<qtdI;i++){
        if(i==0){
           printf("%d",impares[i]); 
        } else{
            printf(" %d",impares[i]);
        }
    }
    printf("\n");
    return 0;
}