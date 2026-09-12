//pao = 1 doce = 2 bolo = 3

#include <stdio.h>

int main(){
    int p,d,b;
    scanf("%d %d %d", &p,&d,&b);
    int total =(p) + (2*d)+(3*b);
    if(total>=150){
        printf("B");
    } else if(total>=120){
        printf("D");
    } else if (total>=100){
        printf("P");
    } else{
        printf("N");
    }

    return 0;
    }
