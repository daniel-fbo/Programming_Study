#include <stdio.h>

int main(){
    int vetor[101]={0}, vetor2[101], sum=0, p;
    int i=0, m=0;
    while(1){
        scanf(" %d",&vetor[i]);
        if (vetor[i]==0){
            break;
        }
        i++;
    }
    scanf("%d",&p);

    for (int j=0; j<i;j++){
        sum+=vetor[j];
        if(sum > p){
            vetor2[m] = vetor[j];
            m++;
            sum=0;
        }
    }

    for(int j=m-1;j>=0;j--){
        printf("%d\n",vetor2[j]);
    }
    return 0;
}