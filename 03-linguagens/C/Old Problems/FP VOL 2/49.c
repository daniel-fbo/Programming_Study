#include <stdio.h>

int main(){
    int P,V;
    scanf("%d %d",&P,&V);
    int troco=V-P;
    printf("%d\n",troco/500);
    troco=troco%500;
    printf("%d\n",troco/100);
    troco=troco%100;
    printf("%d\n",troco/50);
    troco=troco%50;
    printf("%d\n",troco/10);
    troco=troco%10;
    printf("%d\n",troco/5);
    troco=troco%5;
    printf("%d\n",troco);

    return 0;
}