#include <stdio.h>

int main(){
    int A,B,C;
    scanf("%d %d %d", &A,&B,&C);
    if(A==B && A==C){
        printf("empate\n");
    } else if (A==B && A!=C){
        printf("C\n");
    } else if(A!=B && A==C){
        printf("B\n");
    } else{
        printf("A\n");
    }

    return 0;
}