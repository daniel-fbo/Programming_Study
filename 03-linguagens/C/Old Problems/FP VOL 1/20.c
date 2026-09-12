

#include <stdio.h>

int main(){
    int idade1, idade2;
    scanf("%d %d", &idade1, &idade2);
    if(idade1>idade2){
        printf("%d", (idade1-idade2)+ idade1);
    } else{
        printf("%d", (idade2-idade1)+ idade2);   
    }
    return 0;
}
