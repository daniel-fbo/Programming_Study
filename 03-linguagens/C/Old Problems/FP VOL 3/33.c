#include <stdio.h>

int main(){
    int i, N, matrix[15][15];
    scanf("%d", &N);

    for (i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            scanf(" %d", &matrix[i][j]);
        }
    }

    int flag; 
    int primeira_vez = 1; 

    do {
        for (i = 0; i < N; i++){
            int rep = 0;
            for (int j = 0; j < N; j++){
                if (matrix[i][j] == 1){
                    rep++;
                } 
            }
            if (rep == N){
                for (int j = 0; j < N; j++){
                    matrix[i][j] = 0;
                }            
            }
        }

        if (!primeira_vez) printf("\n");

        for (i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                printf("%d%s", matrix[i][j], (j == N-1) ? "" : " ");
            }
            printf("\n");
        }    

        printf("\n"); 
        
        for (int j = N-1; j >= 0; j--){
            int rep1 = 0;
            for (int i = N-1; i >= 0; i--){
                if (matrix[i][j] == 1){
                    rep1++;
                }
            }
            for (int i = N-1; i >= 0; i--){
                if (rep1 > 0){ 
                    matrix[i][j] = 1;
                    rep1--;
                } else { 
                    matrix[i][j] = 0;
                }
            }        
        }
    
        for (i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                printf("%d%s", matrix[i][j], (j == N-1) ? "" : " ");
            }
            printf("\n");
        }  

        flag = 0;
        for (i = 0; i < N; i++){
            int rep = 0;
            for (int j = 0; j < N; j++){
                if (matrix[i][j] == 1){
                    rep++;
                } 
            }
            if (rep == N){
                flag++;
            }
        }
        
        primeira_vez = 0;

    } while (flag > 0); 
    return 0;
}