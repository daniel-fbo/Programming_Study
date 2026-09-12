#include <stdio.h>

int main(){
    int I,N;
    scanf("%d %d", &I,&N);
    if(N==1){
        printf("%d\n",-1);
    } else if ((N-1)%2==0){
        printf("%d\n",-1);
    } else{
        printf("%d",I+N-1);
    }
    return 0;
}