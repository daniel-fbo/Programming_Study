

#include <stdio.h>

int main(){
    int A,B,C;
    scanf("%d %d %d", &A, &B, &C);
    if ((B-A) < (C-B)){
        printf("%d", 1);
    } else if((B-A) > (C-B)){
        printf("%d", -1);
    } else{
        printf("%d", 0);
    }
    return 0;
    }
