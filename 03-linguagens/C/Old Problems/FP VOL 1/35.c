//usar adição de ponteiros, pois nn há como fzr loop com relação a minutagem, e é dificil rodar duas sequencias de indice ao msm tempo

#include <stdio.h>

int main(){
    int qtdGolsP, qtdGolsC, minutosP[101], minutosC[101];
    scanf("%d", &qtdGolsP);
    for(int i=0;i<qtdGolsP;i++){
        scanf(" %d",&minutosP[i]);
    }
    scanf(" %d", &qtdGolsC);
    for(int i=0;i<qtdGolsC;i++){
        scanf(" %d",&minutosC[i]);
    }    

    int *ptrP = minutosP;
    int *ptrC = minutosC;
    int golsP=0;    
    int golsC=0;



    printf("%d %d\n",0,0);
 
    while(golsP < qtdGolsP || golsC < qtdGolsC){

        if(golsP==qtdGolsP){
            golsC++;
            ptrC++; 
            printf("%d %d\n", golsP, golsC);
        } else if(golsC==qtdGolsC){
            golsP++;
            ptrP++; 
            printf("%d %d\n", golsP, golsC);
        } else{
            if (*ptrP < *ptrC){
                golsP++;
                printf("%d %d\n", golsP, golsC);
                ptrP++;
            } else {
                golsC++;
                printf("%d %d\n", golsP, golsC);
                ptrC++;
            }        
        }

    }

    return 0;
}