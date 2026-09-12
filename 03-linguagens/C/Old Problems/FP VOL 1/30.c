#include <stdio.h>

int main(){
    int tamCadeia, rep=1; char cadeia[10001]={0};
    scanf("%d", &tamCadeia);
    for(int i = 0;i<tamCadeia;i++){scanf(" %c", &cadeia[i]);}

    for(int i=0;i+1<=tamCadeia;i++){
        if(cadeia[i] == cadeia[i+1]){
            rep++;
        } else{
            printf("%d %c",rep,cadeia[i]);
            if(i+1!=tamCadeia){
                printf(" ");
            }
            rep=1;
        }
    }
    printf("\n");
    return 0;
}
