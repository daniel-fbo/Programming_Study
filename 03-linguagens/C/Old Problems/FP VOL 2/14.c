#include <stdio.h>

int main(){
    int R,F,C;
    scanf("%d %d %d",&R,&F,&C);
    if (F>3*R || C<95){
        printf("diminuir\n");
    } else if (F<2*R && C>97){
        printf("aumentar\n");
    } else{
        printf("manter\n");
    }
    return 0;
}