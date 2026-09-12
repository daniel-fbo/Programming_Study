#include <stdio.h>

int main(){
    int P1,C1,P2,C2;
    scanf("%d %d %d %d",&P1,&C1,&P2,&C2);
    if (P1*C1 < P2*C2){
        printf("%d\n",1);
    } else if (P1*C1 == P2*C2){
        printf("%d\n",0);
    } else{
        printf("%d\n",-1);
    }
    return 0;
}