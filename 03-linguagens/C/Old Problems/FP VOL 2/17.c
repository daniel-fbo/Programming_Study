#include <stdio.h>

int main(){
    int N, num, A=0,B=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf(" %d",&num);
        if (num == 1){
            if (A==0){
                A=1;
            } else{
                A=0;
            }
        }
        if (num == 2){
            if (A==0){
                A=1;
            } else{
                A=0;
            }
        }
        if (num == 2){
            if (B==0){
                B=1;
            } else{
                B=0;
            }
        }
    }
    printf("%d\n%d\n",A,B);
    return 0;
}