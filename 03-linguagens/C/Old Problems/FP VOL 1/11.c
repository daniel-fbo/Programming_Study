//0 esquerda e 1 direita ; 

#include <stdio.h>

int main(){
    int p, r;
    scanf("%d %d", &p, &r);
    if(p==0){
        printf("C");
    } else if(r==0){
        printf("B");
    } else{
        printf("A");
    }
    return 0;
}
