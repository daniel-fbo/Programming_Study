#include<stdio.h>

int main(){
    int N,num,M=0;
    scanf("%d",&N);
    for (int i=0;i<N;i++){
        scanf(" %d",&num);
        M+=num;
    }
    printf("Carga total: %d kilogramas\n",M);    
    return 0;
}