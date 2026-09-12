#include <stdio.h>

int main(){
    int A,B;
    scanf("%d %d",&A,&B);
    if(A==0){
        if(B==0){
            printf("empate\n");
        } else if(B==2 || B==3){
            printf("A\n");
        } else{
            printf("B\n");
        }
    }
    if(A==1){
        if(B==1){
            printf("empate\n");
        } else if(B==0 || B==4){
            printf("A\n");
        } else{
            printf("B\n");
        }
    }
    if(A==2){
        if(B==2){
            printf("empate\n");
        } else if(B==1 || B==3){
            printf("A\n");
        } else{
            printf("B\n");
        }
    }
    if(A==3){
        if(B==3){
            printf("empate\n");
        } else if(B==1 || B==4){
            printf("A\n");
        } else{
            printf("B\n");
        }
    }
    if(A==4){
        if(B==4){
            printf("empate\n");
        } else if(B==0 || B==2){
            printf("A\n");
        } else{
            printf("B\n");
        }
    }

    return 0;
}