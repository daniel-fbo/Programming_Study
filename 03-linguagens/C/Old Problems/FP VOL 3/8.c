#include<stdio.h>
int permutacao(int vetor[6]);
int fatorial(int a);
int main(){
    int vetor[6],temp;
    scanf("%1d%1d/%1d%1d/%1d%1d",&vetor[0],&vetor[1],&vetor[2],&vetor[3],&vetor[4],&vetor[5]);
    for(int i=0;i<6;i++){
        for (int j=i+1;j<6;j++){
            if (vetor[j]>vetor[i]){
                temp = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = temp;
            }
        }
    }
    printf("%d\n",permutacao(vetor));
    return 0;
}
int permutacao(int vetor[6]){
    int fat = 720;
    int tempRep=1;

    for (int i=1;i<6;i++){
        if (vetor[i] == vetor[i-1]){
            tempRep++;
        } else{
            fat/=fatorial(tempRep);
            tempRep=1;
        }
    }
    fat/=fatorial(tempRep);
    return fat;
}

int fatorial(int a){
    if (a>1){
        return a*fatorial(a-1);
    } else if (a==1){
        return 1*fatorial(a-1);
    } else{
        return 1;
    }
}