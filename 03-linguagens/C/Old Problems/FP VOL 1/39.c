#include <stdio.h>

int main(){
    int A,B,C,D;
    scanf("%d %d %d %d", &A,&B,&C,&D);
    if( ((C - A) / D) * D < (C - B) ){
        printf("N\n");
    } else{
        printf("S\n");
    }
    return 0;
}