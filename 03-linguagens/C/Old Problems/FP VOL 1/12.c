//  A=B+C+D ; B+C = D ; B=C

#include <stdio.h>

int main(){
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    if (B == C && (B+C) == D && (B+C+D)==A){
        printf("S");
    } else {
        printf("N");
    }
    return 0;
}
