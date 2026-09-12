#include <stdio.h>

int main(){
    int N,sum=0,A[1001],dias=0;
    scanf("%d",&N);
    for(int i=0;sum<1000000;i++){
        scanf(" %d",&A[i]);
        sum+=A[i];
        dias++;
    }
    printf("%d\n", dias);
    return 0;
}