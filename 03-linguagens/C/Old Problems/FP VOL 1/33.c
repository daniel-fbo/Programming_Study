#include <stdio.h>

int main(){
    int A,B,C,D;
    scanf("%d %d %d %d", &A,&B,&C,&D);
    if((C-D)>=A && (C-D)<=B){
        printf("S\n");
    } else{
        printf("N\n");
    }
    return 0;
}