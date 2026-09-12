// criar a matrix com 0;
// preencher as bordas

#include <stdio.h>

int main(){
    int numDim;
    scanf("%d", &numDim);
    int matrix[101][101]={0};
        
    for(int i=0; i<numDim; i++){
        for(int j=0; j<numDim; j++){
                matrix[i][j]=1;
        }
    } 

    int inicio = 1;
    int fim = numDim-1;
    while (fim>0){
        for(int i=inicio; i<fim; i++){
            for(int j=inicio; j<fim; j++){
                matrix[i][j]++;
            }
        }
        inicio++;
        fim--;
    }
    
    for(int i=0; i<numDim; i++){
        for(int j=0; j<numDim; j++){
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    } 

    return 0;
    }
