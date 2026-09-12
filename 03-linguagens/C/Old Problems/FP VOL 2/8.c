#include <stdio.h>
int main(){
    int C1, C2, C3, T;
    scanf("%d %d %d %d",&C1,&C2,&C3,&T);
    if(C1+C2+C3 == T){
        printf("Acertou\n");
    } else{
        printf("Errou\n");
    }
    return 0;
}