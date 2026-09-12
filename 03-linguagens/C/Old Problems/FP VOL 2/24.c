#include <stdio.h>

int main(){
    int N,num[10000],menor=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf(" %d",&num[i]);
        if(num[i]<num[menor]){
            menor=i;
        }         
    }

    printf("%d\n",menor);

    return 0;
}