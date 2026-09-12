#include<stdio.h>
int main(){
    int n, numLidos=0;
    while(scanf(" %d\n", &n)==1){
        numLidos++;
    }
    printf("%d",numLidos);
    return 0;
}