#include <stdio.h>

int main(){
    int N,maior; 
    scanf("%d",&N);
    maior=N;
    for(int i = 1; i<4;i++){
        scanf(" %d",&N);
        if(N>maior){
            maior=N;
        }
    }
    printf("%d\n",maior);
    return 0;
}